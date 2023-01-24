#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(int limbNr1,string name1, bool protectedAnimal1){
        limbNr=limbNr1;
        name= name1;
        protectedAnimal= protectedAnimal1;
        cout<<"Konstruktor klasy bazowej = Animal"<<endl;
    }
Animal::Animal(){
    cout<<"Konstruktor bez. klasy bazowej = Animal"<<endl;
}

void Animal::setName(string name11){
    name=name11;
    }
void Animal::setLimbNr(int limbNr11){
    limbNr=limbNr11;
    }
void Animal::setProtectedAnimal(bool protectedAnimal1) {
    protectedAnimal=protectedAnimal1;
    }

string Animal::getName()
{
  return name;
}
int Animal::getLimbNr(){
return limbNr;
}
bool Animal::getProtectedAnimal(){
 return protectedAnimal;
}

void Animal::getVoice(){
    cout<<"Chrum, miau, hau, piiiii"<<endl;
}

void Animal::info(){
    cout<<"Limb nr: "<<limbNr<<endl<<"Name: "<<name<<endl<<"Protected: "<<protectedAnimal<<endl;
}
