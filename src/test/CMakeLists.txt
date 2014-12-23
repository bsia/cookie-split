
project(test-cookie-split CXX C)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_VERBOSE_MAKEFILE true)

include_directories(${BASEPATH}/external/include)
#include_directories(/Users/bsia/src/opensource/cookie-split/external/include)

add_executable(test_cookie_split testCookieSplit)
enable_testing()
add_test(ut_001 test_cookie_split)

