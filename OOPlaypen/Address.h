#pragma once
class Address
{
public:
    int house_number;
    string street_name;
    string city;
    Address(const int &house_number, const string &street_name, const string &city)
        :house_number(house_number), street_name(street_name), city(city)
    {
    }
};
