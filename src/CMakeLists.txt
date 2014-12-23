project(cookie-split CXX C)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_VERBOSE_MAKEFILE on)
#set(CMAKE_EXE_LINKER_FLAGS "-framework Foundation")

SET(BASEPATH "${CMAKE_SOURCE_DIR}")

set(SOURCE_FILES
    cookie_split.c)

set(LOCAL_HEADER_FILES
    cookie_split.h)

add_library(cookie_split
  ${SOURCE_FILES}
  ${LOCAL_HEADER_FILES}
)

add_executable(cookie_splitter main cookie_split)
add_subdirectory(test)





