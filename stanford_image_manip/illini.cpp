#include "illini.h"
#include "image.h"

Illini::Illini(string filename,int color1,int color2):Image()
{
    readFromFile(filename);
    for(unsigned x = 0; x < width() ; x++)
      for(unsigned y = 0; y < height(); y++)
      {
         //reference on the pixel
         HSLAPixel &P = getPixel(x, y);
         //modifiy the element of P
if(P.h>11 && P.h<318)
{
int d1=abs(P.h-color1);
int d2=abs(P.h-color2);
if(d1<d2)
    P.h=color1;
else P.h=color2;

}
else
    P.h=color1;

      }
}
