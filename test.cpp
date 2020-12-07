#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "BMPArrayConvert.hpp"

int main()
{
    
    std::vector<std::vector<unsigned int>> image = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}; //print 3x3 px black image

    BMP::arrayToBMP("test.bmp", image, image, image); //print grayscale image
    return 0;
}
