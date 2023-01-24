#include <iostream>
#include "Citizen.h"

using namespace std;

Citizen::Citizen(string nam1,string surname1, string postal_code1, int age1,char sex1){
    name=nam1;
    surname=surname1;
    postal_code=postal_code1;
    age = age1;
    sex=sex1;
}
Citizen::Citizen(){
    name = "?";
     surname="?";
    postal_code="?";
    age = 0;
    sex= 'm';
}

void Citizen::show(){
    cout<<"imie: "<<name<<" surname:"<<surname<<" age:"<<age<<" postal code:"<< postal_code<< " sex:"<<sex<<endl;
}

string Citizen::getName(){
    return name;
}

string Citizen::getSurname(){
    return surname;
}

string Citizen::getPostalCode(){
    return postal_code;
}

int Citizen::getAge(){
    return age;
}

char Citizen::getSex(){
    return sex;
}
