# Minimal cmake version required
cmake_minimum_required(VERSION 3.1)

# Project title
project(five)

# Language version required: C++ 14
set (CMAKE_CXX_STANDARD 14)

# Source files
set(SRCS
    #    fun.h
    #    fun.cpp
    #    main.cpp
    MyClass.h
    MyClass.cpp
    )

add_executable(${PROJECT_NAME} ${SRCS})
#2.1 Написать свой пример класса в 2 файлах : MyClass.h, MyClass.cpp (например). Класс
#должен содержать не менее 2х приватных полей, геттеры и сеттеры на все поля, не
#менее 2х конструкторов, еще минимум 2 обычных метода, статическое поле и
#статический метод, деструктор, а также friend функцию. Реализовать часть методов в .h, а
#часть -- в .cpp. Продемонстрировать использование этого класса в функции main().
