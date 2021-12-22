cmake_minimum_required (VERSION 3.5.0)
set (CMAKE_CXX_STANDARD 11)
project (metapackager)
set(CMAKE_BUILD_TYPE Debug)
include_directories(. ..)
add_executable (metapackage metaPackageInfo.cpp debPackageInfo.cpp utils.cpp)

