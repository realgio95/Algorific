/*
 * test.cc - functions, arrays, pointers, image representation
 * Richard Vaughan 2014
 */

#include <stdlib.h> // for random()
#include <stdint.h> // for explicit integer types, eg. uint8_t
#include <string.h> // for memset()
#include <assert.h>
#include <stdio.h>
#include <math.h>
// image drawing functions
#include "draw.h"

// load PNG image function
#include "png.h"

// image manipulation functions
#include "imgops.h"


int main( int argc, char* argv[] )
{
  const unsigned int winwidth  = 400;
  const unsigned int winheight = 400;

  unsigned int imgwidth  = winwidth / 4;
  unsigned int imgheight = winheight / 4 ;

  // initialize the graphics system
  draw_startup( (char*)"Grey Array", winwidth, winheight );

  uint8_t* img = NULL;

  if( argc == 2 ) // if a filename was specified
    {
      uint32_t depth=0;
      int alpha=0;
      if( LoadPngImage( argv[1], &imgwidth, &imgheight, &depth, &alpha, &img ) == 0 )
  {
    printf( "failed to load image %s\n", argv[1] );
    exit(1);
  }
    }
  else // no filename specified: create a blank image
    {
      // allocate an array for our image
      img = malloc( imgwidth * imgheight * sizeof(uint8_t) );
      if( img == NULL )
  {
    printf( "failed to allocate memory for image.\n" );
    exit(1);
  }

      // set the whole array to zero (black)
      memset( img, 0, imgwidth * imgheight * sizeof(img[0] ));
    }

        // todo: this is a good place to use some image-modifying functions from imgops.c
    //1.zero( img, imgwidth,imgheight);
    //2.1. draw_image_grey( img, imgwidth, imgheight );
    //2.2 uint8_t* newimg = copy(img,imgwidth,imgheight);
      //2.2 draw_image_grey( newimg, imgwidth, imgheight );
      //2.2.0.1  uint8_t dark = min(img, imgwidth, imgheight ) ;
        //2.2.1 printf("%u",dark);
      //2.2.2  uint8_t white = max(img, imgwidth, imgheight ) ;
        //2.2.3 uint8_t white = max(img, imgwidth, imgheight ) ;
      //2.2.4 
      //draw_image_grey( img, imgwidth, imgheight );
      //printf("before\n");
      //replace_color(img,imgwidth,imgheight,1,255);
      //draw_image_grey( img, imgwidth, imgheight );
      //printf("before\n");
      //2.4.0 locate_color(img,imgwidth,imgheight,)
  

      //------------------------------------------------------------
      //Task  3,4 5,6
      //2.5.1 draw_image_grey( img, imgwidth, imgheight );
      //2.5.2   invert(img, imgwidth,imgheight);
      //draw_image_grey( img, imgwidth, imgheight );
      //2.6
        //double scale_factor=.20;
        //2.6 scale_brightness(img,imgwidth,imgheight,scale_factor);
      //flip_horizontal(img, imgwidth,imgheight);
      //draw_image_grey( img, imgwidth, imgheight );
        //flip_vertical(img,imgwidth,imgheight);
        //draw_image_grey( img, imgwidth, imgheight );
        //unsigned int x;
        //unsigned int y;
        //int value = locate_color( img,imgwidth,imgheight,183,&x,&y);
        //printf("\n x value = %u, y value = %u\n", x,y);
        // printf("\n %d \n", value);
        //scale_brightness(img,imgwidth,imgheight,scale_factor);
        // draw_image_grey( img, imgwidth, imgheight );
          


      //------------------------------------------------------------
      //Task  7,8
      scale_brightness(img,imgwidth,imgheight,0.2);
      draw_image_grey( img, imgwidth, imgheight );
      normalize(img,imgwidth,imgheight);
      //draw_image_grey( img, imgwidth, imgheight );
      
      // uint8_t* newimg = half(img,imgwidth,imgheight);
       
       
      // draw_image_grey( newimg, imgwidth/2, imgheight/2 );

        //---------------------------------------------------------------------
      //Task 9 ,10, 11
      //draw_image_grey( img, imgwidth, imgheight );
      //region_set(img,imgwidth,imgheight,0,0,imgwidth,imgheight, 1);
        //draw_image_grey( img, imgwidth, imgheight );
        //unsigned int l=0;im
    //unsigned int r=imgwidth;
        //unsigned int b=imgheight;
        //uint8_t* newimage = region_copy(img,imgwidth,imgheight,l,t,r,b);  
      //unsigned int nrows = b-t;
      //unsigned int ncols = r-l;
        //draw_image_grey( newimage, ncols, nrows );
        //unsigned long int sum1 = region_integrate(img, imgwidth,imgheight,l,t,r,b);
        //printf("sum of all the pixels in the region for img1 = %li\n\n\n", sum1); 
        //---------------------------------------------------------------------


    // draw the array as a grey-scale image in the window
    // This function returns after a user clicks or presses a button in the window
      draw_image_grey( img, imgwidth, imgheight );
      // finalize the graphics system, freeing its resources
      draw_shutdown();


      // every malloc() should have a matching free()
      free(img);
      //free(newimage);
    // free(newimg);
      return 0;
}