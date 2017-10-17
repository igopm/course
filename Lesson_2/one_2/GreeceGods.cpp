
// Created by Igor Maschikevich on 9/17/2017.
//
#include "GreeceGods.h"

namespace GG {

GreeceGods::GreeceGods() :
    name("Zeus"),
    age(150),
    force(1000){
    //    MyClass::print();
}

GreeceGods::GreeceGods(const std::string &name, int age, int  force) :
    name(name),
    age(age),
    force(force){
}

std::string GreeceGods::getName(){
    return name;
}

void GreeceGods::setAge(int age){
    GreeceGods::age = age;
}

int GreeceGods::getAge(){
    return age;
}

void GreeceGods::setForce(int force){
    GreeceGods::force = force;
}

int GreeceGods::getForce(){
    return force;
}


void GreeceGods::print(){
    std::cout << "Name: " << name << " - (Age: " << age << ", Force: " << force <<");"<< std::endl;
}
}
