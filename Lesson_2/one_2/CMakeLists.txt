cmake_minimum_required(VERSION 3.1)
project(one_2)


set (CMAKE_CXX_STANDARD 14)

# Source files
set(SRCS
    main.cpp
    GreeceGods.h
    GreeceGods.cpp
    )

add_executable(${PROJECT_NAME} ${SRCS})
# Source files

