#pragma once
#include "Address.h"
class Person
{
public:
    Person(const Person &p);
    Person(int age, string name, int sex);
    Person(int age, string name, int sex, int houseNumber, string streetName, string city);
    ~Person();
    int age;
    string name;
    int sex;
    Address *address;
    const static int female = 0;
    const static int male = 1;
    static int lifeExpetancy;

    static int getLifeExpectancy();
    void greet();
};
