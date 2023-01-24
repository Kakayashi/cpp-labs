#ifndef CITIZEN_H_INCLUDED
#define CITIZEN_H_INCLUDED
#include <iostream>

using namespace std;

class Citizen{
private:
    string name,surname,postal_code;
    int age;
    char sex;
public:
    Citizen(string nam1,string surname1, string postal_code1, int age1,char sex1);
    Citizen();
    void show();
    string getName();
    string getSurname();
    string getPostalCode();
    int getAge();
    char getSex();
};


#endif // CITIZEN_H_INCLUDED
