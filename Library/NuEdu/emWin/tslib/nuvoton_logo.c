/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (Nuvoton) for emWin V5.46.                 *
*        Compiled Mar 29 2018, 10:00:23                              *
*                                                                    *
*        (c) 1998 - 2018 Segger Microcontroller GmbH                 *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: nuvoton_logo                                          *
* Dimensions:  159 * 18                                              *
* NumColors:   256                                                   *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmnuvoton_logo;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colorsnuvoton_logo[] = {
#if (GUI_USE_ARGB == 0)
  0x0003E2, 0x0004E2, 0x020AE4, 0x050AE4,
  0x020CE4, 0x020EE4, 0x040DE4, 0x0210E4,
  0x0510E5, 0x0710E4, 0x0412E4, 0x0612E5,
  0x0615E5, 0x0912E5, 0x0916E5, 0x0D15E5,
  0x0A19E5, 0x0C19E5, 0x0D1DE6, 0x1018E5,
  0x101EE6, 0x161EE6, 0x1120E6, 0x1420E6,
  0x1522E6, 0x1622E7, 0x1624E6, 0x1921E7,
  0x1925E7, 0x1D26E7, 0x1A28E7, 0x1C28E7,
  0x1523E8, 0x1B29E8, 0x1D29E8, 0x1D2CE8,
  0x1F2CE8, 0x202BE7, 0x202CE7, 0x2227E8,
  0x212EE8, 0x252EE8, 0x2330E8, 0x2532E8,
  0x2734E9, 0x2A31E8, 0x2C32E8, 0x2935E8,
  0x2D36E8, 0x2D39E9, 0x303AE9, 0x313DE9,
  0x353EE9, 0x3440EA, 0x3942EA, 0x3C42EA,
  0x3945EA, 0x3D46EA, 0x3D48EA, 0x3E48EB,
  0x3E4AEB, 0x3F4BEC, 0x4145EA, 0x404AEB,
  0x464AEB, 0x424DEB, 0x424DEC, 0x454EEC,
  0x4550EC, 0x4D53EB, 0x4952EC, 0x4D52EC,
  0x4A55EC, 0x4C54EC, 0x4D56EC, 0x4D57EE,
  0x4E58EC, 0x5055EC, 0x5059EC, 0x545AEC,
  0x525CED, 0x555DED, 0x595EED, 0x5560EE,
  0x5961EE, 0x5C61EE, 0x5A64EE, 0x5D66EE,
  0x5E68EE, 0x6169EE, 0x646AEF, 0x636CEF,
  0x666DEF, 0x696AEE, 0x696EEF, 0x6971EF,
  0x6C72EF, 0x6C76EF, 0x7071EE, 0x646DF0,
  0x6A6DF0, 0x6670F0, 0x6971F0, 0x6C72F0,
  0x6E75F0, 0x7072F0, 0x7076F0, 0x7078F0,
  0x7278F0, 0x717AF0, 0x737BF1, 0x7478F0,
  0x737CF0, 0x757DF1, 0x787EF1, 0x7680F1,
  0x7980F1, 0x7D80F1, 0x7D85F1, 0x8082F1,
  0x8086F1, 0x8288F1, 0x8188F2, 0x8288F2,
  0x828AF2, 0x8689F2, 0x868DF2, 0x888EF2,
  0x8C8FF2, 0x8991F3, 0x8D90F2, 0x8F94F3,
  0x9195F3, 0x9197F4, 0x9198F3, 0x9298F4,
  0x969CF4, 0x999EF4, 0x99A0F5, 0x9AA0F4,
  0x9DA1F4, 0x9EA4F5, 0x9FA6F5, 0xA2A3F5,
  0xA0A4F5, 0xA2A4F5, 0xA0A6F4, 0xA2A6F5,
  0xA1A7F6, 0xA2A8F5, 0xA5AAF5, 0xA7ACF6,
  0xAAABF6, 0xA8ADF5, 0xA9ACF6, 0xA8AEF6,
  0xAAAFF6, 0xACAFF7, 0xABB0F7, 0xACB1F6,
  0xADB2F6, 0xAFB3F6, 0xAFB4F6, 0xB0B3F7,
  0xB1B6F6, 0xB4B6F7, 0xB5B9F7, 0xB9BDF7,
  0xB7BBF8, 0xB8BCF8, 0xBABCF8, 0xBABEF8,
  0xBCBFF8, 0xBCC0F7, 0xBCC0F8, 0xBEC1F8,
  0xBEC2F8, 0xBFC4F9, 0xC0C2F8, 0xC0C4F8,
  0xC2C5F9, 0xC1C6F9, 0xC2C6F8, 0xC4C5F9,
  0xC4C7F8, 0xC6C9F9, 0xC8CAF9, 0xC9CCF9,
  0xCCCDF9, 0xCCCEF9, 0xCECFF9, 0xCCCEFA,
  0xCDD1FA, 0xCED0FA, 0xCFD2FA, 0xD0D1FA,
  0xD0D2FA, 0xD1D4FA, 0xD2D4FA, 0xD4D6FA,
  0xD6D8FA, 0xD7DAFA, 0xD9DAFB, 0xDADCFB,
  0xDCDEFB, 0xDEDFFB, 0xD9DBFC, 0xDBDDFC,
  0xDEE0FB, 0xDEE0FC, 0xE0E2FB, 0xE3E4FB,
  0xE6E6FB, 0xE0E2FC, 0xE2E2FC, 0xE2E4FC,
  0xE4E4FC, 0xE4E6FC, 0xE6E7FC, 0xE6E8FC,
  0xE8E9FC, 0xE9EAFC, 0xEAEBFC, 0xEAECFC,
  0xECECFC, 0xECEEFC, 0xEEEFFC, 0xEEF0FC,
  0xF0F0FC, 0xF1F2FD, 0xF2F2FD, 0xF1F1FE,
  0xF1F2FE, 0xF3F3FE, 0xF3F4FD, 0xF2F4FE,
  0xF4F4FD, 0xF5F6FD, 0xF6F6FD, 0xF4F4FE,
  0xF5F6FE, 0xF6F6FE, 0xF7F8FD, 0xF7F8FE,
  0xF8F8FD, 0xFAFAFD, 0xF8F8FE, 0xF9FAFE,
  0xFAFAFE, 0xFBFCFE, 0xFCFCFE, 0xFDFEFE,
  0xFEFEFE, 0x000000, 0x000000, 0x000000
#else
  0xFFE20300, 0xFFE20400, 0xFFE40A02, 0xFFE40A05,
  0xFFE40C02, 0xFFE40E02, 0xFFE40D04, 0xFFE41002,
  0xFFE51005, 0xFFE41007, 0xFFE41204, 0xFFE51206,
  0xFFE51506, 0xFFE51209, 0xFFE51609, 0xFFE5150D,
  0xFFE5190A, 0xFFE5190C, 0xFFE61D0D, 0xFFE51810,
  0xFFE61E10, 0xFFE61E16, 0xFFE62011, 0xFFE62014,
  0xFFE62215, 0xFFE72216, 0xFFE62416, 0xFFE72119,
  0xFFE72519, 0xFFE7261D, 0xFFE7281A, 0xFFE7281C,
  0xFFE82315, 0xFFE8291B, 0xFFE8291D, 0xFFE82C1D,
  0xFFE82C1F, 0xFFE72B20, 0xFFE72C20, 0xFFE82722,
  0xFFE82E21, 0xFFE82E25, 0xFFE83023, 0xFFE83225,
  0xFFE93427, 0xFFE8312A, 0xFFE8322C, 0xFFE83529,
  0xFFE8362D, 0xFFE9392D, 0xFFE93A30, 0xFFE93D31,
  0xFFE93E35, 0xFFEA4034, 0xFFEA4239, 0xFFEA423C,
  0xFFEA4539, 0xFFEA463D, 0xFFEA483D, 0xFFEB483E,
  0xFFEB4A3E, 0xFFEC4B3F, 0xFFEA4541, 0xFFEB4A40,
  0xFFEB4A46, 0xFFEB4D42, 0xFFEC4D42, 0xFFEC4E45,
  0xFFEC5045, 0xFFEB534D, 0xFFEC5249, 0xFFEC524D,
  0xFFEC554A, 0xFFEC544C, 0xFFEC564D, 0xFFEE574D,
  0xFFEC584E, 0xFFEC5550, 0xFFEC5950, 0xFFEC5A54,
  0xFFED5C52, 0xFFED5D55, 0xFFED5E59, 0xFFEE6055,
  0xFFEE6159, 0xFFEE615C, 0xFFEE645A, 0xFFEE665D,
  0xFFEE685E, 0xFFEE6961, 0xFFEF6A64, 0xFFEF6C63,
  0xFFEF6D66, 0xFFEE6A69, 0xFFEF6E69, 0xFFEF7169,
  0xFFEF726C, 0xFFEF766C, 0xFFEE7170, 0xFFF06D64,
  0xFFF06D6A, 0xFFF07066, 0xFFF07169, 0xFFF0726C,
  0xFFF0756E, 0xFFF07270, 0xFFF07670, 0xFFF07870,
  0xFFF07872, 0xFFF07A71, 0xFFF17B73, 0xFFF07874,
  0xFFF07C73, 0xFFF17D75, 0xFFF17E78, 0xFFF18076,
  0xFFF18079, 0xFFF1807D, 0xFFF1857D, 0xFFF18280,
  0xFFF18680, 0xFFF18882, 0xFFF28881, 0xFFF28882,
  0xFFF28A82, 0xFFF28986, 0xFFF28D86, 0xFFF28E88,
  0xFFF28F8C, 0xFFF39189, 0xFFF2908D, 0xFFF3948F,
  0xFFF39591, 0xFFF49791, 0xFFF39891, 0xFFF49892,
  0xFFF49C96, 0xFFF49E99, 0xFFF5A099, 0xFFF4A09A,
  0xFFF4A19D, 0xFFF5A49E, 0xFFF5A69F, 0xFFF5A3A2,
  0xFFF5A4A0, 0xFFF5A4A2, 0xFFF4A6A0, 0xFFF5A6A2,
  0xFFF6A7A1, 0xFFF5A8A2, 0xFFF5AAA5, 0xFFF6ACA7,
  0xFFF6ABAA, 0xFFF5ADA8, 0xFFF6ACA9, 0xFFF6AEA8,
  0xFFF6AFAA, 0xFFF7AFAC, 0xFFF7B0AB, 0xFFF6B1AC,
  0xFFF6B2AD, 0xFFF6B3AF, 0xFFF6B4AF, 0xFFF7B3B0,
  0xFFF6B6B1, 0xFFF7B6B4, 0xFFF7B9B5, 0xFFF7BDB9,
  0xFFF8BBB7, 0xFFF8BCB8, 0xFFF8BCBA, 0xFFF8BEBA,
  0xFFF8BFBC, 0xFFF7C0BC, 0xFFF8C0BC, 0xFFF8C1BE,
  0xFFF8C2BE, 0xFFF9C4BF, 0xFFF8C2C0, 0xFFF8C4C0,
  0xFFF9C5C2, 0xFFF9C6C1, 0xFFF8C6C2, 0xFFF9C5C4,
  0xFFF8C7C4, 0xFFF9C9C6, 0xFFF9CAC8, 0xFFF9CCC9,
  0xFFF9CDCC, 0xFFF9CECC, 0xFFF9CFCE, 0xFFFACECC,
  0xFFFAD1CD, 0xFFFAD0CE, 0xFFFAD2CF, 0xFFFAD1D0,
  0xFFFAD2D0, 0xFFFAD4D1, 0xFFFAD4D2, 0xFFFAD6D4,
  0xFFFAD8D6, 0xFFFADAD7, 0xFFFBDAD9, 0xFFFBDCDA,
  0xFFFBDEDC, 0xFFFBDFDE, 0xFFFCDBD9, 0xFFFCDDDB,
  0xFFFBE0DE, 0xFFFCE0DE, 0xFFFBE2E0, 0xFFFBE4E3,
  0xFFFBE6E6, 0xFFFCE2E0, 0xFFFCE2E2, 0xFFFCE4E2,
  0xFFFCE4E4, 0xFFFCE6E4, 0xFFFCE7E6, 0xFFFCE8E6,
  0xFFFCE9E8, 0xFFFCEAE9, 0xFFFCEBEA, 0xFFFCECEA,
  0xFFFCECEC, 0xFFFCEEEC, 0xFFFCEFEE, 0xFFFCF0EE,
  0xFFFCF0F0, 0xFFFDF2F1, 0xFFFDF2F2, 0xFFFEF1F1,
  0xFFFEF2F1, 0xFFFEF3F3, 0xFFFDF4F3, 0xFFFEF4F2,
  0xFFFDF4F4, 0xFFFDF6F5, 0xFFFDF6F6, 0xFFFEF4F4,
  0xFFFEF6F5, 0xFFFEF6F6, 0xFFFDF8F7, 0xFFFEF8F7,
  0xFFFDF8F8, 0xFFFDFAFA, 0xFFFEF8F8, 0xFFFEFAF9,
  0xFFFEFAFA, 0xFFFEFCFB, 0xFFFEFCFC, 0xFFFEFEFD,
  0xFFFEFEFE, 0xFF000000, 0xFF000000, 0xFF000000
#endif

};

static GUI_CONST_STORAGE GUI_LOGPALETTE _Palnuvoton_logo = {
  256,  // Number of entries
  0,    // No transparency
  &_Colorsnuvoton_logo[0]
};

static GUI_CONST_STORAGE unsigned char _acnuvoton_logo[] = {
  0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xF7, 0xE9, 0xDC, 0xD1, 0xCB, 0xC5, 0xB0, 0xA0, 0x93, 0x8B, 0x8B, 0x8B, 0x8E, 0x9C, 0xAB, 0xC1, 0xCE, 0xD1, 0xDA, 0xE4, 0xF7, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
  0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xF9, 0xF8, 0xF8, 0xF7, 0xF8, 0xF9, 0xFA, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xF9, 0xF9, 0xF8, 0xF8, 0xF9, 0xF9, 
        0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xD1, 0xA5, 0x7B, 0x4B, 0x24, 0x09, 0x02, 0x06, 0x05, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x05, 0x02, 0x05, 0x19, 0x3A, 0x6B, 0x98, 0xC9, 0xF1, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xFA, 0xF9, 0xF8, 0xF8, 
        0xF8, 0xF9, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xF9, 0xF8, 0xF7, 0xF8, 0xF8, 0xF9, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
  0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xEC, 0xE3, 0xD6, 0xC2, 0xB8, 0xAE, 0xAE, 0xB5, 0xBF, 0xCC, 0xE2, 0xEA, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xED, 0xE2, 0xE2, 0xE2, 0xE2, 0xE4, 0xEE, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xED, 0xE2, 0xE2, 
        0xE2, 0xE2, 0xE4, 0xF2, 0xFA, 0xF0, 0xE2, 0xE2, 0xE2, 0xE2, 0xE9, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0xE4, 0xE2, 0xE2, 0xE2, 0xE4, 0xF3, 0xFB, 0xFC, 0xFC, 0xFC, 0xF9, 0xEC, 0xE1, 0xD5, 0xC6, 0xBA, 0xB4, 0xB4, 0xBA, 0xC6, 
        0xD5, 0xE1, 0xED, 0xF9, 0xFC, 0xFC, 0xE4, 0x7D, 0x1D, 0x08, 0x0C, 0x10, 0x11, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x10, 0x0E, 0x0A, 0x09, 0x5C, 0xD0, 0xFC, 0xFC, 0xFA, 0xEE, 0xE3, 0xDA, 0xC7, 0xBB, 0xB4, 0xB4, 
        0xB9, 0xC0, 0xD1, 0xE0, 0xEA, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xE9, 0xE2, 0xCC, 0xBF, 0xB1, 0xAE, 0xAE, 0xB8, 0xC2, 0xD8, 0xE4, 0xED, 0xFA, 0xFC, 0xFC, 0xFC, 0xFC,
  0xFC, 0xFC, 0xFA, 0xE4, 0xC8, 0x95, 0x78, 0x5E, 0x4E, 0x3C, 0x35, 0x35, 0x39, 0x48, 0x5A, 0x77, 0x8A, 0xBB, 0xE0, 0xFA, 0xFC, 0xFC, 0xFC, 0xEC, 0xA6, 0x76, 0x75, 0x75, 0x75, 0x7D, 0xAE, 0xF9, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0xA4, 0x76, 0x75, 
        0x75, 0x75, 0x7F, 0xB8, 0xE5, 0xB8, 0x77, 0x75, 0x75, 0x77, 0x89, 0xC7, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xBB, 0x7B, 0x75, 0x75, 0x75, 0x84, 0xBE, 0xFB, 0xFC, 0xF8, 0xE0, 0xC4, 0x95, 0x78, 0x5E, 0x50, 0x42, 0x3A, 0x3A, 0x42, 0x50, 
        0x5E, 0x7A, 0x96, 0xC4, 0xE1, 0xF8, 0xE2, 0x83, 0x36, 0x2C, 0x2F, 0x2F, 0x2F, 0x2F, 0x2C, 0x23, 0x16, 0x12, 0x12, 0x12, 0x14, 0x1E, 0x2B, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2B, 0x61, 0xCD, 0xFA, 0xE6, 0xCA, 0x9F, 0x7E, 0x6A, 0x54, 0x44, 0x3A, 0x39, 
        0x3D, 0x4B, 0x5A, 0x74, 0x8B, 0xBB, 0xDC, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xDF, 0xBA, 0x89, 0x77, 0x59, 0x48, 0x39, 0x35, 0x35, 0x3C, 0x4E, 0x60, 0x7B, 0x96, 0xC8, 0xE6, 0xFB, 0xFC, 0xFC,
  0xFC, 0xF9, 0xCC, 0x88, 0x51, 0x2C, 0x12, 0x0E, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0E, 0x0F, 0x24, 0x4A, 0x7E, 0xCB, 0xF7, 0xFC, 0xFC, 0xDF, 0x6D, 0x0E, 0x0B, 0x0C, 0x0B, 0x15, 0x7C, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD3, 0x6A, 0x0E, 0x0B, 
        0x0C, 0x0B, 0x22, 0x83, 0xE1, 0xA6, 0x30, 0x08, 0x0C, 0x0E, 0x2D, 0x82, 0xE1, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD2, 0x6D, 0x11, 0x0D, 0x0B, 0x13, 0x4D, 0xB7, 0xFC, 0xEE, 0xC5, 0x84, 0x52, 0x2C, 0x12, 0x0E, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x0E, 
        0x0E, 0x12, 0x2F, 0x51, 0x85, 0xC6, 0xE4, 0xC2, 0x9F, 0x96, 0x96, 0x96, 0x96, 0x96, 0x8D, 0x63, 0x24, 0x11, 0x12, 0x12, 0x16, 0x4C, 0x87, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0xB6, 0xE0, 0xCC, 0x8E, 0x59, 0x32, 0x16, 0x0E, 0x0E, 0x0E, 0x10, 0x10, 
        0x0E, 0x0E, 0x0E, 0x0E, 0x24, 0x49, 0x76, 0xBC, 0xE9, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0xC6, 0x7A, 0x46, 0x23, 0x0F, 0x0E, 0x0E, 0x10, 0x10, 0x0E, 0x10, 0x0E, 0x0C, 0x12, 0x2C, 0x51, 0x8F, 0xD6, 0xFA, 0xFC,
  0xFB, 0xD5, 0x6A, 0x29, 0x0E, 0x10, 0x12, 0x12, 0x10, 0x16, 0x21, 0x23, 0x20, 0x11, 0x12, 0x12, 0x12, 0x11, 0x22, 0x5E, 0xBF, 0xFC, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x1A, 0x7E, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD9, 0x71, 0x16, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xEF, 0xDF, 0x82, 0x17, 0x11, 0x12, 0x17, 0x46, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xEC, 0x96, 0x30, 0x11, 0x12, 0x12, 0x32, 0x89, 0xE6, 0xED, 0xB4, 0x65, 0x29, 0x12, 0x10, 0x12, 0x12, 0x10, 0x11, 0x16, 0x16, 0x11, 0x10, 
        0x12, 0x12, 0x10, 0x12, 0x2A, 0x66, 0xB8, 0xED, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE5, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xC5, 0x6E, 0x32, 0x14, 0x10, 0x12, 0x12, 0x10, 0x10, 0x14, 0x16, 
        0x12, 0x10, 0x11, 0x12, 0x11, 0x10, 0x1C, 0x52, 0xA5, 0xE6, 0xFB, 0xFC, 0xFC, 0xFA, 0xB9, 0x5A, 0x1E, 0x10, 0x12, 0x12, 0x12, 0x11, 0x1A, 0x23, 0x21, 0x17, 0x10, 0x12, 0x12, 0x10, 0x0E, 0x2E, 0x75, 0xDA, 0xFC,
  0xF6, 0x7E, 0x15, 0x10, 0x12, 0x12, 0x12, 0x1A, 0x38, 0x5B, 0x78, 0x7A, 0x66, 0x46, 0x1A, 0x12, 0x12, 0x12, 0x12, 0x1C, 0x67, 0xDA, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x1A, 0x7E, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD9, 0x71, 0x16, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xEF, 0xFA, 0xC5, 0x51, 0x0E, 0x12, 0x12, 0x24, 0x6A, 0xCA, 0xFC, 0xFC, 0xFC, 0xFB, 0xBD, 0x51, 0x14, 0x12, 0x12, 0x1D, 0x68, 0xCD, 0xF6, 0xBB, 0x5B, 0x1A, 0x10, 0x12, 0x12, 0x12, 0x21, 0x37, 0x4E, 0x57, 0x57, 0x4C, 0x36, 
        0x1E, 0x12, 0x12, 0x12, 0x10, 0x1A, 0x5C, 0xBD, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xD9, 0x6C, 0x22, 0x11, 0x12, 0x12, 0x12, 0x1A, 0x34, 0x49, 0x56, 0x58, 
        0x50, 0x3F, 0x22, 0x12, 0x12, 0x12, 0x12, 0x17, 0x45, 0xAC, 0xEE, 0xFC, 0xFC, 0xD0, 0x5C, 0x1C, 0x12, 0x12, 0x12, 0x12, 0x1E, 0x47, 0x68, 0x7A, 0x76, 0x59, 0x35, 0x18, 0x12, 0x12, 0x12, 0x10, 0x1B, 0x85, 0xF7,
  0xE0, 0x1D, 0x10, 0x12, 0x12, 0x12, 0x17, 0x51, 0xAB, 0xD7, 0xDE, 0xDF, 0xD9, 0xC7, 0x6B, 0x11, 0x12, 0x12, 0x12, 0x12, 0x31, 0x95, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x1A, 0x7E, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD9, 0x71, 0x16, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xEF, 0xFC, 0xE6, 0x96, 0x2F, 0x10, 0x12, 0x12, 0x33, 0x8B, 0xE5, 0xFC, 0xFC, 0xDB, 0x7E, 0x22, 0x12, 0x12, 0x12, 0x43, 0xAC, 0xF9, 0xD9, 0x7E, 0x28, 0x10, 0x12, 0x12, 0x11, 0x2F, 0x72, 0xAF, 0xCF, 0xD5, 0xD2, 0xCB, 0xAC, 
        0x70, 0x2F, 0x12, 0x12, 0x12, 0x10, 0x28, 0x80, 0xDC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x8E, 0x30, 0x11, 0x12, 0x12, 0x11, 0x29, 0x5F, 0xA4, 0xC9, 0xD5, 0xD5, 
        0xCD, 0xBD, 0x7F, 0x31, 0x12, 0x12, 0x12, 0x12, 0x17, 0x5E, 0xD2, 0xFA, 0xFC, 0x89, 0x2C, 0x14, 0x12, 0x12, 0x12, 0x12, 0x72, 0xC7, 0xDA, 0xDF, 0xDE, 0xD7, 0xA6, 0x4B, 0x14, 0x12, 0x12, 0x12, 0x0E, 0x29, 0xE7,
  0xC6, 0x03, 0x12, 0x12, 0x12, 0x11, 0x38, 0xA6, 0xF5, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xD0, 0x38, 0x0E, 0x12, 0x12, 0x12, 0x19, 0x72, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x1A, 0x7E, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD9, 0x71, 0x16, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xEF, 0xFC, 0xFA, 0xD0, 0x74, 0x16, 0x12, 0x12, 0x20, 0x51, 0xBA, 0xFB, 0xF0, 0xA3, 0x36, 0x14, 0x12, 0x12, 0x29, 0x84, 0xEE, 0xF8, 0xBC, 0x51, 0x10, 0x12, 0x12, 0x11, 0x2A, 0x7B, 0xD0, 0xF7, 0xFB, 0xFC, 0xFC, 0xFB, 0xF7, 
        0xCC, 0x78, 0x2A, 0x11, 0x12, 0x12, 0x0E, 0x55, 0xC0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF0, 0x52, 0x14, 0x12, 0x12, 0x12, 0x1A, 0x66, 0xC5, 0xF2, 0xFB, 0xFC, 0xFC, 
        0xFC, 0xFA, 0xE6, 0x90, 0x22, 0x12, 0x12, 0x12, 0x10, 0x38, 0xA8, 0xF1, 0xFC, 0x6F, 0x20, 0x12, 0x12, 0x12, 0x0C, 0x44, 0xD2, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x9E, 0x33, 0x11, 0x12, 0x12, 0x12, 0x03, 0xD9,
  0xB2, 0x02, 0x12, 0x12, 0x12, 0x11, 0x5A, 0xE5, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xEC, 0x7F, 0x07, 0x12, 0x12, 0x12, 0x17, 0x69, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x1A, 0x7E, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD9, 0x71, 0x16, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xEF, 0xFC, 0xFC, 0xF6, 0xB8, 0x4E, 0x11, 0x12, 0x12, 0x2A, 0x78, 0xD5, 0xC4, 0x59, 0x19, 0x12, 0x12, 0x16, 0x58, 0xCD, 0xFC, 0xE9, 0xA2, 0x3B, 0x10, 0x12, 0x12, 0x0E, 0x46, 0xB9, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xF8, 0xB2, 0x43, 0x0E, 0x12, 0x12, 0x10, 0x3C, 0xA4, 0xEC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD3, 0x3E, 0x0E, 0x12, 0x12, 0x10, 0x33, 0x97, 0xE8, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xE4, 0x39, 0x12, 0x12, 0x12, 0x11, 0x28, 0x86, 0xE4, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x07, 0x88, 0xEE, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xDC, 0x55, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x97, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xE1, 0x73, 0x16, 0x12, 0x12, 0x12, 0x20, 0x76, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD3, 0x6B, 0x12, 0x12, 
        0x12, 0x10, 0x28, 0x87, 0xED, 0xFC, 0xFC, 0xFC, 0xE2, 0x8D, 0x2F, 0x10, 0x12, 0x14, 0x3B, 0x8C, 0x7F, 0x2B, 0x12, 0x12, 0x11, 0x36, 0xA6, 0xFC, 0xFC, 0xE5, 0x99, 0x36, 0x10, 0x12, 0x12, 0x0E, 0x4F, 0xC6, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFB, 0xBC, 0x45, 0x0E, 0x12, 0x12, 0x10, 0x38, 0x9C, 0xE6, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xCA, 0x37, 0x10, 0x12, 0x12, 0x10, 0x39, 0xA9, 0xEE, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xEF, 0x46, 0x12, 0x12, 0x12, 0x11, 0x21, 0x81, 0xE4, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA5, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF6, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x9B, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xE2, 0x76, 0x20, 0x12, 0x12, 0x12, 0x14, 0x54, 0xEC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xC9, 0x58, 0x10, 0x12, 
        0x12, 0x10, 0x2A, 0x88, 0xED, 0xFC, 0xFC, 0xFC, 0xF9, 0xC9, 0x6A, 0x17, 0x12, 0x12, 0x1F, 0x39, 0x33, 0x16, 0x12, 0x11, 0x22, 0x79, 0xE5, 0xFC, 0xFC, 0xF0, 0xA9, 0x43, 0x0E, 0x12, 0x12, 0x10, 0x3B, 0xA4, 0xF0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xEF, 0xA1, 0x39, 0x10, 0x12, 0x12, 0x0E, 0x44, 0xAB, 0xF1, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xDC, 0x40, 0x10, 0x12, 0x12, 0x10, 0x2F, 0x88, 0xE1, 0xFC, 0xFC, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xFC, 0xCF, 0x33, 0x11, 0x12, 0x12, 0x10, 0x2C, 0x8B, 0xE9, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x9B, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xE5, 0x87, 0x28, 0x10, 0x12, 0x12, 0x11, 0x30, 0xAA, 0xFB, 0xFC, 0xFC, 0xFC, 0xFB, 0xDE, 0x90, 0x35, 0x10, 0x12, 
        0x12, 0x10, 0x30, 0xA4, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xEC, 0xA6, 0x42, 0x10, 0x12, 0x12, 0x14, 0x14, 0x12, 0x12, 0x14, 0x51, 0xC7, 0xFC, 0xFC, 0xFC, 0xFA, 0xC7, 0x5A, 0x12, 0x12, 0x12, 0x12, 0x1E, 0x59, 0xB8, 0xEC, 0xFB, 0xFC, 0xFC, 0xFB, 0xEC, 
        0xB3, 0x59, 0x1E, 0x12, 0x12, 0x12, 0x11, 0x5C, 0xCA, 0xFA, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF0, 0x60, 0x18, 0x12, 0x12, 0x12, 0x16, 0x4E, 0xA6, 0xE2, 0xFA, 0xFC, 0xFC, 
        0xFC, 0xFC, 0xCA, 0x72, 0x1C, 0x12, 0x12, 0x12, 0x10, 0x42, 0xB4, 0xF7, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x9B, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xF6, 0xB4, 0x3F, 0x0E, 0x12, 0x12, 0x12, 0x16, 0x41, 0x93, 0xB1, 0xC6, 0xC4, 0xAA, 0x80, 0x43, 0x16, 0x12, 0x12, 
        0x12, 0x14, 0x49, 0xCA, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xD3, 0x81, 0x2B, 0x11, 0x12, 0x12, 0x12, 0x12, 0x10, 0x32, 0x9A, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xE0, 0x8B, 0x32, 0x10, 0x12, 0x12, 0x12, 0x21, 0x51, 0x84, 0xA0, 0xAE, 0xAD, 0xA0, 0x84, 
        0x51, 0x21, 0x12, 0x12, 0x12, 0x11, 0x33, 0x8D, 0xE2, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xA9, 0x36, 0x11, 0x12, 0x12, 0x12, 0x1A, 0x46, 0x7C, 0x97, 0xAB, 0xB0, 
        0xA4, 0x91, 0x5B, 0x24, 0x12, 0x12, 0x12, 0x11, 0x1F, 0x78, 0xDC, 0xFB, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x9B, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xFB, 0xE0, 0x87, 0x29, 0x0E, 0x12, 0x12, 0x12, 0x14, 0x2B, 0x41, 0x50, 0x50, 0x3A, 0x2A, 0x16, 0x12, 0x12, 0x12, 
        0x10, 0x30, 0x8D, 0xE9, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0xBF, 0x57, 0x14, 0x12, 0x12, 0x12, 0x11, 0x1C, 0x72, 0xDC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xCD, 0x7B, 0x29, 0x10, 0x12, 0x12, 0x12, 0x17, 0x26, 0x33, 0x3D, 0x3C, 0x33, 0x25, 
        0x17, 0x12, 0x12, 0x12, 0x10, 0x29, 0x7D, 0xD0, 0xFA, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE3, 0x88, 0x2C, 0x10, 0x12, 0x12, 0x12, 0x17, 0x1F, 0x31, 0x39, 0x3F, 
        0x35, 0x29, 0x18, 0x12, 0x12, 0x12, 0x11, 0x1B, 0x5E, 0xC4, 0xF7, 0xFC, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xB1, 0x04, 0x12, 0x12, 0x12, 0x11, 0x69, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF4, 0x9B, 0x05, 0x12, 0x12, 0x12, 0x18, 0x69, 0xFC, 0xFC, 0xFA, 0xDA, 0x8C, 0x32, 0x0E, 0x10, 0x12, 0x12, 0x12, 0x14, 0x16, 0x16, 0x14, 0x12, 0x12, 0x12, 0x10, 0x0F, 
        0x38, 0x8B, 0xDD, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x9D, 0x37, 0x0E, 0x12, 0x12, 0x10, 0x44, 0xB9, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xD1, 0x85, 0x35, 0x10, 0x10, 0x12, 0x12, 0x12, 0x14, 0x14, 0x14, 0x14, 0x12, 
        0x12, 0x12, 0x10, 0x0E, 0x34, 0x84, 0xCC, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE4, 0x87, 0x2C, 0x10, 0x12, 0x12, 0x17, 0x6E, 0xD0, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xDF, 0x94, 0x3F, 0x13, 0x10, 0x12, 0x12, 0x12, 0x12, 0x14, 0x14, 
        0x12, 0x12, 0x12, 0x12, 0x10, 0x0C, 0x1E, 0x74, 0xC2, 0xF3, 0xFC, 0xFC, 0xFC, 0x69, 0x18, 0x12, 0x12, 0x12, 0x04, 0xA6, 0xF7, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF7, 0x64, 0x11, 0x12, 0x12, 0x12, 0x02, 0xCA,
  0xAA, 0x00, 0x04, 0x04, 0x04, 0x03, 0x62, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF2, 0x95, 0x01, 0x04, 0x04, 0x04, 0x0F, 0x62, 0xFC, 0xFC, 0xFC, 0xFB, 0xE5, 0xB4, 0x74, 0x2D, 0x06, 0x05, 0x0A, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x05, 0x0D, 0x34, 0x7E, 
        0xBA, 0xE3, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xD1, 0x74, 0x1B, 0x02, 0x02, 0x2D, 0x8C, 0xE4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFA, 0xE0, 0xB2, 0x74, 0x30, 0x0D, 0x07, 0x0A, 0x0C, 0x0C, 0x0C, 0x0C, 0x0A, 
        0x07, 0x0D, 0x30, 0x72, 0xB2, 0xE0, 0xFA, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xE2, 0x82, 0x27, 0x02, 0x04, 0x02, 0x09, 0x60, 0xCD, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xE6, 0xBE, 0x83, 0x38, 0x0F, 0x05, 0x0C, 0x0C, 0x0C, 0x0C, 
        0x0C, 0x0C, 0x07, 0x02, 0x19, 0x65, 0xA8, 0xDB, 0xF8, 0xFC, 0xFC, 0xFC, 0xFB, 0x62, 0x0F, 0x04, 0x04, 0x04, 0x01, 0xA4, 0xF4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF3, 0x5D, 0x03, 0x04, 0x04, 0x04, 0x00, 0xC7,
  0xF0, 0xC6, 0xC8, 0xC8, 0xC8, 0xC7, 0xD4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xE5, 0xC6, 0xC8, 0xC8, 0xC8, 0xC8, 0xD4, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xE5, 0xD5, 0xC4, 0x92, 0x71, 0x57, 0x53, 0x54, 0x59, 0x76, 0x96, 0xBF, 0xD9, 0xE9, 
        0xF9, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xE0, 0xC8, 0xC2, 0xC1, 0xCA, 0xE8, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xE4, 0xD6, 0xBA, 0x8B, 0x71, 0x57, 0x53, 0x53, 0x57, 0x71, 
        0x8C, 0xBB, 0xD6, 0xE4, 0xF9, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xDC, 0xC7, 0xC4, 0xC4, 0xC4, 0xC3, 0xD2, 0xF6, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF9, 0xEF, 0xD9, 0xBF, 0x96, 0x76, 0x59, 0x54, 0x50, 
        0x56, 0x61, 0x84, 0xB8, 0xCF, 0xE1, 0xF8, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xD4, 0xCA, 0xCA, 0xCA, 0xCA, 0xC6, 0xEB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFB, 0xD4, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xF7
};

GUI_CONST_STORAGE GUI_BITMAP bmnuvoton_logo = {
  159, // xSize
  18, // ySize
  159, // BytesPerLine
  8, // BitsPerPixel
  _acnuvoton_logo,  // Pointer to picture data (indices)
  &_Palnuvoton_logo   // Pointer to palette
};

/*************************** End of file ****************************/
