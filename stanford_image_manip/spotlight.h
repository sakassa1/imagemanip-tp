#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include "image.h"
#include "PNG.h"

class Spotlight:public Image
{
public:
    using Image::Image;
    Spotlight(string filename,int centerX, int centerY);
    void changeSpotPoint(int centerX, int centerY);


};

#endif // SPOTLIGHT_H
