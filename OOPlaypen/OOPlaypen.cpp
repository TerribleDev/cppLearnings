// OOPlaypen.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Address.h"
#include "Person.h"
#include "Employee.h"

int main()
{
    Person p(22, "jane", 0);
    Person *p2 = new Person(25, "Tommy", 1);

    Person *p3 = new Person(25, "tommy", 1, 22, "123 fake street", "fake city");
    p3->greet();

    cout << "le" << Person::getLifeExpectancy();
    delete p2;
    delete p3;
    Person P5 = *p3;

    Employee e(33, "chris", Person::male, "dep");
    auto u = [](const Person& p)
    {
        cout << p.name << endl;
    };
    u(e);
    Person &pr = e;
    Employee& er = static_cast<Employee&>(pr);

    getchar();
    return 0;
}