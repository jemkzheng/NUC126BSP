/******************************************************************************
 * @file     main.c
 * @brief    Demonstrate how to simulate a USB CD-ROM device.
 * @note
 *
 *           This sample simulate a USB CD-ROM with a test.txt file.
 *           User can change file within CD-ROM, follow steps below:
 *
 *           (1) Generate an ISO file via ISO Workshop.
 *               http://www.glorylogic.com/iso-workshop/
 *               -> Option : Select ISO9660 Level1
 *
 *           (2) Convert the .iso file into C code file via SRecord tool
 *               http://srecord.sourceforge.net
 *
 *               -> srec_cat InputFile.iso -binary -o OutputFile.c -C-Array
 *
 *           (3) The System Area, the first 32768 data bytes is unused by ISO 9660.
 *               Therefore, user need to delete the first 32768 bytes on the DiskImg.c
 *               manually to save space. Finally, replace DiskImg.c in this project.
 *
 *               -> EPROM_LENGTH in DiskImg.c is the size of your .iso image.
 *                  Define MSC_ImageSize value in massstorage.h in this project.
 *                  Modify MSC_ImageSize value to hold the file size.
 *
 * Copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#include <stdio.h>
#include "NUC126.h"
#include "massstorage.h"

/* If crystal-less is enabled, system won't use any crystal as clock source
   If using crystal-less, system will be 48MHz, otherwise, system is 72MHz
*/
#define CRYSTAL_LESS    1
#define HIRC48_AUTO_TRIM    0x412   /* Use USB SOF to fine tune HIRC 48MHz */

#define CONFIG_BASE      0x00300000
#define DATA_FLASH_BASE  MASS_STORAGE_OFFSET


/*--------------------------------------------------------------------------*/
void SYS_Init(void)
{

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Enable Internal RC 22.1184 MHz clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk);

    /* Waiting for Internal RC clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    /* Switch HCLK clock source to Internal RC and HCLK source divide 1 */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC, CLK_CLKDIV0_HCLK(1));

#ifndef CRYSTAL_LESS
    /* Enable external XTAL 12 MHz clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HXTEN_Msk);

    /* Waiting for external XTAL clock ready */
    CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);

    /* Set core clock */
    CLK_SetCoreClock(72000000);

    /* Use HIRC as UART clock source */
    CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL1_UARTSEL_HIRC, CLK_CLKDIV0_UART(1));

    /* Use PLL as USB clock source */
    CLK_SetModuleClock(USBD_MODULE, CLK_CLKSEL3_USBDSEL_PLL, CLK_CLKDIV0_USB(3));

#else
    /* Enable Internal RC 48MHz clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRC48EN_Msk);

    /* Waiting for Internal RC clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRC48STB_Msk);

    /* Switch HCLK clock source to Internal RC and HCLK source divide 1 */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC48, CLK_CLKDIV0_HCLK(1));

    /* Use HIRC as UART clock source */
    CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL1_UARTSEL_HIRC, CLK_CLKDIV0_UART(1));

    /* Use HIRC48 as USB clock source */
    CLK_SetModuleClock(USBD_MODULE, CLK_CLKSEL3_USBDSEL_HIRC48, CLK_CLKDIV0_USB(1));
#endif

    /* Enable module clock */
    CLK_EnableModuleClock(UART0_MODULE);
    CLK_EnableModuleClock(USBD_MODULE);


    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Set P3 multi-function pins for UART0 RXD and TXD */
    SYS->GPD_MFPL = SYS_GPD_MFPL_PD0MFP_UART0_RXD | SYS_GPD_MFPL_PD1MFP_UART0_TXD;

}


void UART0_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init UART                                                                                               */
    /*---------------------------------------------------------------------------------------------------------*/
    /* Reset IP */
    SYS->IPRST1 |=  SYS_IPRST1_UART0RST_Msk;
    SYS->IPRST1 &= ~SYS_IPRST1_UART0RST_Msk;

    /* Configure UART0 and set UART0 Baudrate */
    UART0->BAUD = UART_BAUD_MODE2 | UART_BAUD_MODE2_DIVIDER(__HIRC, 115200);
    UART0->LINE = UART_WORD_LEN_8 | UART_PARITY_NONE | UART_STOP_BIT_1;
}


/*---------------------------------------------------------------------------------------------------------*/
/*  Main Function                                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
int32_t main(void)
{

    /* Unlock protected registers */
    SYS_UnlockReg();

    SYS_Init();
    UART0_Init();

    printf("+-------------------------------------------------------+\n");
    printf("|       NuMicro USB MassStorage CDROM Sample Code       |\n");
    printf("+-------------------------------------------------------+\n");


    printf("NuMicro USB MassStorage Start!\n");

    /* Open USB controller */
    USBD_Open(&gsInfo, MSC_ClassRequest, NULL);

    /* Endpoint configuration */
    MSC_Init();
    /* Start USB device */
    USBD_Start();


#ifdef CRYSTAL_LESS
    /* Waiting for SOF before USB clock auto trim */
    USBD->INTSTS = USBD_INTSTS_SOFIF_Msk;
    while((USBD->INTSTS & USBD_INTSTS_SOFIF_Msk) == 0);

    /* Enable USB clock trim function */
    SYS->IRCTCTL1 = HIRC48_AUTO_TRIM;
#endif

    NVIC_EnableIRQ(USBD_IRQn);

    while(1)
    {

#ifdef CRYSTAL_LESS
        /* Re-start auto trim when any error found */
        if(SYS->IRCTISTS & (SYS_IRCTISTS_CLKERRIF1_Msk | SYS_IRCTISTS_TFAILIF1_Msk))
        {
            /* USB clock trim fail. Just retry */
            SYS->IRCTCTL1 = 0;  /* Disable Auto Trim */
            SYS->IRCTISTS = SYS_IRCTISTS_CLKERRIF1_Msk | SYS_IRCTISTS_TFAILIF1_Msk;
            
            /* Waiting for SOF before USB clock auto trim */
            USBD->INTSTS = USBD_INTSTS_SOFIF_Msk;
            while((USBD->INTSTS & USBD_INTSTS_SOFIF_Msk) == 0);
            
            SYS->IRCTCTL1 = HIRC48_AUTO_TRIM; /* Re-enable Auto Trim */
            printf("USB trim fail. Just retry.\n");
        }
#endif

        MSC_ProcessCmd();
#ifdef NONBLOCK_PRINTF
        putchar(0); // Flush the data in software FIFO to UART
#endif
    }
}



/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/

