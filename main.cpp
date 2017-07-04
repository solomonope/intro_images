#include <iostream>
#include "Bitmap.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bitmap bitmap("./images/tiger.bmp");
    FileHeader header = bitmap.getFileHeader();

    std::cout << header.signature << std::endl;
    return 0;
}