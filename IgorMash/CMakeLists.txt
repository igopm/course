# Minimal cmake version required
cmake_minimum_required(VERSION 3.1)

# Project title
project(IgorMash)

# Language version required: C++ 14
set(CMAKE_CXX_STANDARD 14)

# Source files
set(SRCS 
    #  hello.cpp
    )

#  Executable created from ${SRCS}
#add_executable(${PROJECT_NAME} ${SRCS})
#add_subdirectory(Lesson_1)
add_subdirectory(Lesson_2)
