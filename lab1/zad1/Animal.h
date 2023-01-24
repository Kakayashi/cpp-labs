#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    int limbNr;
    string name;
    bool protectedAnimal;
public:
    Animal(int limbNr1,string name1, bool protectedAnimal1 = true);
    Animal();

    void setName(string name11);
    void setLimbNr(int limbNr1) ;
    void setProtectedAnimal(bool protectedAnimal1) ;

    string getName();
    int getLimbNr();
    bool getProtectedAnimal();

    void getVoice();

    void info();


};



#endif // ANIMAL_H_INCLUDED
