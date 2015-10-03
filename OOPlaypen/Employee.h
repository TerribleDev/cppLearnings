#pragma once
#include "Person.h"
class Employee :
    public Person
{
public:
    Employee(int age, string const &name, int sex, string department = string())
        : Person(age, name, sex), department(department)
    {
    }
    string department;
    int taxId;
};
