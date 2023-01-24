#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>

using namespace std;

class Employee{
private:
    string surname;
    int age;
    int experience;
    float salary;
public:
    Employee(string surname1, int age1, int experience1, float salary1);
    Employee();
    virtual ~Employee();
    virtual void show();
    virtual int calculateSalary(float value)=0;
    int ageEmployment(int x);

    string getName();
    int getAge();
    int getExperience();
    float getSalary();
    void setSalary(float value);
};

#endif // EMPLOYEE_H_INCLUDED
