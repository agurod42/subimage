project(subimage)

cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

find_package(OpenCV 3 REQUIRED)

include(CMakeToolsHelpers OPTIONAL)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(subimage src/main.cpp)

target_link_libraries(subimage ${OpenCV_LIBS})