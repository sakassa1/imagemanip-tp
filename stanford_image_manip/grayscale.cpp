#include "grayscale.h"
#include "image.h"

Grayscale::Grayscale(string filename):Image()
{
    readFromFile(filename);
    saturate(-1);

}
