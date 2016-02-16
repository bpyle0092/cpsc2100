/** CPSC 2100 - image.h **/
#ifndef IMAGE_H
#define IMAGE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** color_t definition **/
typedef struct colorType 
{
   unsigned char r;
   unsigned char g;
   unsigned char b;
} color_t;

/** image_t defintion **/
typedef struct imageType 
{
   color_t *image;
   int     columns;
   int     rows;
   int     brightness;
} image_t;

/** Prototype statements **/
int getint(FILE *inFile, int *result);
image_t *getimage(char *inFileName);
image_t *rotate(image_t *inImage);

#endif
