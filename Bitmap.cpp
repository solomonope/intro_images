#include <fstream>
#include<iterator>
#include "Bitmap.h"

Bitmap::Bitmap(std::string path): path(path) {
    std::ifstream infile;
    infile.open(this->path, std::ios::in|std::ios::binary);
    infile.get((char *)&this->header,sizeof(this->header));
}

FileHeader Bitmap::getFileHeader() const {
    return this->header;
}