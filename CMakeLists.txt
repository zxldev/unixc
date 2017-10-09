cmake_minimum_required(VERSION 3.6)
#示执行构建过程中详细的信息
set(CMAKE_VERBOSE_MAKEFILE on)
project(linuxc)

set(CMAKE_CXX_STANDARD 11)

include_directories(lib)


add_subdirectory(lib)
add_subdirectory(src)






