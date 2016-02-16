
/** rotate.c 

    CpSc 2100: homework 2 

    Rotate a PPM image right 90 degrees

**/
#include "image.h"

image_t *rotate(image_t *inImage) 
{
   image_t *rotateImage;
   int rows = inImage->rows;
   int cols = inImage->columns;
   color_t *inptr;
   color_t *outptr;
   color_t *pixptr;
   


   /*  malloc an image_t struct for the rotated image   */





   /* malloc memory for the image itself and assign the
      address to the image pointer in the image_t struct  */



   /*  assign the appropriate rows, columns, and brightness
       to the image_t structure created above              */
   




   /*  write the code to create the rotated image         */


   return(rotateImage);
}
