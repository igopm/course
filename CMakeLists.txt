# Minimal cmake version required
cmake_minimum_required(VERSION 3.1)

# Project title
project(course)

# Language version required: C++ 14
set(CMAKE_CXX_STANDARD 14)

# Build all examples, each one is a separate sub-project in a subdirectory
#add_subdirectory(IgorMash)



add_subdirectory(Lesson_1)
add_subdirectory(Lesson_2)
