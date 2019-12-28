cmake_minimum_required(VERSION 3.16)

# set the project name
project(Tutorial VERSION 0.1)

# add the executable
add_executable(myprogram main.c)

configure_file(TutorialConfig.h.in TutorialConfig.h)

#target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")
