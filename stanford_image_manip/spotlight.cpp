#include "spotlight.h"
#include "image.h"
#include "PNG.h"
#include"math.h"

Spotlight::Spotlight(string filename,int centerX, int centerY){



    readFromFile(filename);
    for(unsigned x = 0; x < width() ; x++)
      for(unsigned y = 0; y < height(); y++)
      {
         //reference on the pixel
         HSLAPixel &P = getPixel(x, y);
          double distance = sqrt((x-centerX)*(x-centerX)+(y-centerY)*(y-centerY));
         if(distance>=160) P.l=0.2*P.l;
         else P.l=abs(P.l-distance*0.005*P.l);

      }


}

