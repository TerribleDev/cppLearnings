#include "stdafx.h"
#include "Person.h"
#include "Address.h"
Person::Person(const Person & p)
    :age(p.age), name(p.name), sex(p.sex)
{
    auto* a = p.address;
    address = new Address(
        a->house_number,
        a->street_name,
        a->city);
}
Person::Person(int age, string name, int sex)
    :age(age), name(name), sex(sex)
{
    address = nullptr;
}

Person::Person(int age, string name, int sex, int houseNumber, string streetName, string city)
    : Person(age, name, sex)
{
    if (address != nullptr)
    {
        delete address;
    }
    address = new Address(houseNumber, streetName, city);
}

Person::~Person()
{
    if (address != nullptr)
    {
        delete address;
        address = nullptr;
    }
}

int Person::getLifeExpectancy()
{
    return Person::lifeExpetancy;
}

void Person::greet()
{
    cout << "My name is " << this->name << " and I am " << this->age << endl;
    if (address)
    {
        cout << "I live at " << address->house_number << " " << address->city << endl;
    }
}
int Person::lifeExpetancy = 80;