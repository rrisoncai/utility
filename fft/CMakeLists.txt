cmake_minimum_required(VERSION 2.8)
project(test_fft)

add_library(fft SHARED fft.c)
add_executable(test_fft main.c )
target_link_libraries(test_fft fft m)
