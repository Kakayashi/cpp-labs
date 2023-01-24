#ifndef TEAMLEADER_H_INCLUDED
#define TEAMLEADER_H_INCLUDED

#include "Employee.h"
#include <iostream>

using namespace std;

class TeamLeader: public Employee{
public:
    TeamLeader(string surname1, int age1, int experience1, float salary1);
    //float calculateBonus(int value);
    //void show();
};


#endif // TEAMLEADER_H_INCLUDED
