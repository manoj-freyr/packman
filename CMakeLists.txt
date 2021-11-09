cmake_minimum_required (VERSION 3.5.0)
project (HELLO)
set(CMAKE_BUILD_TYPE Debug)
add_executable (packman packageHandler.cpp packageHandlerDeb.cpp handlerCreator.cpp utils.cpp action.cpp)
#target_link_libraries(helloDemo yaml)

