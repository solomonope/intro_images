#include<string>

#ifndef INTRO_IMAGES_BITMAP_H
#define INTRO_IMAGES_BITMAP_H

struct FileHeader {
    u_int8_t signature[2];
    u_int8_t size[4];
    u_int8_t reserved[2];
    u_int8_t reserved_2[2];
    u_int8_t fileoffset[4];

};

class Bitmap {
    std::string path;
    FileHeader header;

public:
    Bitmap(std::string path);

    FileHeader getFileHeader() const;

};


#endif //INTRO_IMAGES_BITMAP_H
