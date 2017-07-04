#include<string>

#ifndef INTRO_IMAGES_BITMAP_H
#define INTRO_IMAGES_BITMAP_H


class Bitmap {
    std::string path;
    u_int8_t header[8];


public:
    Bitmap(std::string path);



};


#endif //INTRO_IMAGES_BITMAP_H
