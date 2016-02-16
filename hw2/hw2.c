/** CPSC 2100 - hw2.c **/

/* Convert a color PPM image to a sepia-toned image */
#include "image.h"

/** Main **/
int main(int argc, char *argv[]) 
{
   image_t *inImage;
   image_t *outImage;
   FILE *outFile;

   /* Test and fetch input parameters */
   if (argc != 3) 
   {
      fprintf(stderr, "Usage: ./hw2 infile outfile\n");
      exit(1);
   }

   /* Input the source image */
   if ((inImage = getimage(argv[1])) == NULL) 
   {
      fprintf(stderr, "getimage() failed\n");
      exit(1);
   }

   if ((outFile = fopen(argv[2], "w")) == NULL) 
   {
      fprintf(stderr, "Cannot open output file\n");
      exit(1);
   }

   /* rotate image   */
   outImage = rotate(inImage);

   /* Was image creation successful? */
   if (outImage == NULL) 
   {
      fprintf(stderr, "sepia() call returned NULL\n");
      fprintf(stderr, "Did not create new sepia-toned image\n");
      exit(1);
   }

   /* And output the image */
   fprintf(outFile, "P6 %d %d %d\n", 
     outImage->columns, outImage->rows, outImage->brightness);
   fwrite(outImage->image, sizeof(color_t), 
            outImage->columns * outImage->rows, outFile);
   
   return 0;
}
