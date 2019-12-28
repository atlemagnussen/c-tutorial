cmake_minimum_required(VERSION 3.16)

# set the project name
project(myprogram LANGUAGES C VERSION "0.1.1")

# add the executable
add_executable(myprogram src/main.c)

configure_file(config.h.in config.h)

target_include_directories(myprogram PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

#include_directories(${PROJECT_BINARY_BIN})
#target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")
