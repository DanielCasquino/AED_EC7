cmake_minimum_required(VERSION 3.5.0)
project(AED_EC7 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD_REQUIRED 23)

include(CTest)
enable_testing()

add_executable(AED_EC7 MedianFinder.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
