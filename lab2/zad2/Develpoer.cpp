#include <iostream>
#include "Developer.h"

using namespace std;

Developer::Developer(string surname1, int age1, int experience1, float salary1):Employee(surname1,age1,experience1,salary1){
    cout<<"Konstruktor z klasy developer. "<<endl;
};
/*
int Developer::calculateSalary(float value){
    salary = value;
};*/
float Developer::calculateBonus(int value){
    float sa = getSalary();
    int ex = getExperience();
    float newSalary = value+0.2*value*(1+sa+ex);
    setSalary(newSalary);
}
