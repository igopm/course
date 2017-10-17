//
// Created by Igor Maschikevich on 9/17/2017.
//

#pragma once

#include <iostream>
#include <string>


namespace GG {

class GreeceGods{
public:
    static constexpr int GODS = 10;

public:
    GreeceGods();
    explicit GreeceGods(const std::string &name, int age , int force);

    void setName(const std::string &name);
    std::string getName();

    int getAge();
    void setAge(int age);

    int getForce();
    void setForce(int force);

    void print();

private:
    std::string name;
    int age;
    int force;
};

}
