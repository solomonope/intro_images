cmake_minimum_required(VERSION 3.7)
project(intro_images)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Bitmap.cpp Bitmap.h)
add_executable(intro_images ${SOURCE_FILES})