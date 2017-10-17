//
// Created by Igor Maschikevich on 9/04/2017.
//
#include <iostream>
#include <string>

#include "GreeceGods.h"

using namespace std;
using namespace GG;

//2.1
int main()
{
    GreeceGods first;
    GreeceGods god_1{"Hera", 145, 800};
    GreeceGods god_2{"Athena", 100, 600};


    first.print();
    god_1.print();
    god_2.print();
    return 0;
}
