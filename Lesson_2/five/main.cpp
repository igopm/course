//
// Created by Igor Maschikevich on 9/05/2017.
//
#include <iostream>
#include "fun.h"


/* 1.5 Написать свой пример программы которая содержит модуль (пару хэдер-cpp,
 * например файлы fun.h, fun.cpp), которые реализуют минимум 2 функции, а также класс в
 * виде 2-х отдельных файлов (Например MyClass.h, MyClass.cpp). Поместить все это в
 * namespace Fun. Также написать файл main.cpp, с функцией main(), которая вызывает
 * функции из fun и использует класс MyClass. Собрать это все с помощью CMake.
 */
int main()
{
    using namespace std;
    using namespace Fun;

    Fun::funPrint();
    Fun::MyClass mc;
    mc.print();
    return 0;
}
