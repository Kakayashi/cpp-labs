#ifndef CITY_H_INCLUDED
#define CITY_H_INCLUDED
#include "Citizen.h"
#include <iostream>
#include <vector>

using namespace std;

class City{
private:
    vector<Citizen> citizens;
    string city_name;
public:
    City(string name);
    void addCitizen(Citizen new_citizen);
    void deleteCitizen(int age1,string surname1);
    void showCitizens();
    void showCity();
    int woman();
    int adults();
    int postal_codes();
};


#endif // CITY_H_INCLUDED
