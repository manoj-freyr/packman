cmake_minimum_required (VERSION 3.5.0)
set (CMAKE_CXX_STANDARD 11)
project (HELLO)
set(CMAKE_BUILD_TYPE Debug)
add_executable (packman packageHandler.cpp packageHandlerDeb.cpp
handlerCreator.cpp utils.cpp debPackageInfo.cpp metaPackageInfo.cpp action.cpp)

