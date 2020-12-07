# BMP-Array-convert
This project allows you to convert from BMP to array and array to BMP in c++

## Usage


```
#include "BMPArrayConvert.hpp"

BMP::arrayToBMP(std::string filePath, std::vector<std::vector<unsigned int>> red_channel, std::vector<std::vector<unsigned int>> green_channel, std::vector<std::vector<unsigned int>> blue_channel)
```


To print a grayscale image, use `BMP::arrayToBMP(filePath, pixel_intensities, pixel_intensities, pixel_intensities)` Where `pixel_intensities` are your grayscale image data.


Data should be an matrix of unsigned integers (`std::vector<std::vector<unsigned int>>`) with a value between 0 and 255 each.
