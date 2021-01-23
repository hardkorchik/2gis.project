cmake_minimum_required(VERSION 2.8)	

project(2gis.project)	


set(SOURCE_EXE test/test.cpp)	

set(SOURCE_LIB src/source.cpp)	

set(HEADER src/header/header.h)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mavx -O3")

add_library(2gis.project STATIC ${SOURCE_LIB})	

add_executable(main ${SOURCE_EXE})	

target_link_libraries(main 2gis.project)		