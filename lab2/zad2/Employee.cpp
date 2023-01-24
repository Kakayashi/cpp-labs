#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string surname1, int age1, int experience1, float salary1){
    surname=surname1;
    age=age1;
    experience=experience1;
    salary=salary1;
}
Employee::Employee(){}
Employee:: ~Employee()
{
 cout<<"Wirtualny destruktor klasy bazowej Employee"<<endl;
}
/*
Employee::Employee show(){
    cout<<"surname: "<<surname<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"experience: "<<experience<<endl;
    cout<<"salary: "<<salary<<endl;
}*/

 int Employee::ageEmployment(int x){
    int l=2022-x;
    return l;
 };

 void Employee::setSalary(float value){
    salary=value;
 };

 float Employee::getSalary(){
    return salary;
 };

 int Employee::getExperience(){
    return experience;
 };

void Employee::show(){
    cout<<"Surname "<<surname<<endl;
    cout<<"age "<<age<<endl;
    cout<<"experience "<<experience<<endl;
    cout<<"salary "<<salary<<endl;
 }

