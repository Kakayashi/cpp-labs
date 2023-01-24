#ifndef DEVELOPER_H_INCLUDED
#define DEVELOPER_H_INCLUDED
#include "Employee.h"
#include <iostream>

using namespace std;

class Developer: public Employee{
public:
    Developer(string surname1, int age1, int experience1, float salary1);
    float calculateBonus(int value);
    //virtual int calculateSalary(float value) override;
};

#endif // DEVELOPER_H_INCLUDED
