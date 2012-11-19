/*
 * bitmap.h
 *
 *  Created on: 19.11.2012
 *      Author: djbelyak
 */

#ifndef BITMAP_H_
#define BITMAP_H_

typedef unsigned short int WORD;
typedef unsigned long DWORD;
typedef long LONG;

typedef struct tagBITMAPFILEHEADER
{
  WORD    bfType;        // смещение 0 от начала файла
  DWORD   bfSize;        // смещение 2 от начала файла, длина 4
  WORD    bfReserved1;
  WORD    bfReserved2;
  DWORD   bfOffBits;     // смещение 10 от начала файла, длина 4
} BITMAPFILEHEADER, *PBITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER{
  DWORD  biSize;
  LONG   biWidth;
  LONG   biHeight;
  WORD   biPlanes;
  WORD   biBitCount;
  DWORD  biCompression;
  DWORD  biSizeImage;
  LONG   biXPelsPerMeter;
  LONG   biYPelsPerMeter;
  DWORD  biClrUsed;
  DWORD  biClrImportant;
} BITMAPINFOHEADER, *PBITMAPINFOHEADER;

#endif /* BITMAP_H_ */
