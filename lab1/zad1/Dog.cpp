#include "Dog.h"

using namespace std;

Dog::Dog(int limbNr1,string name1, bool protectedAnimal1,string breed1, int levelOfGuideSkills1, int levelOfTrackerSkills1):
Animal(limbNr1,name1,protectedAnimal1)
{
levelOfGuideSkills=levelOfGuideSkills1;
levelOfTrackerSkills=levelOfTrackerSkills1;
breed=breed1;
cout<<"Konstruktor klasy pochodnej Dog"<<endl;
 }
 Dog::Dog(){
 cout<<"Konstruktor klasy .bez pochodnej Dog"<<endl;
 }

 void Dog::setBreed(string breed1){
    breed=breed1;
 };

 void Dog::setSkillLevel(int type, int value){
    if(type==1){
        levelOfGuideSkills = value;
    }
    else if(type==2){
        levelOfTrackerSkills = value;
    }
    else cout<<"Nieprawidlowy typ"<<endl;
 }

 int Dog::getSkillLevel(int type){
  if(type==1){
        return levelOfGuideSkills;
    }
    else if(type==2){
        return levelOfTrackerSkills;
    }
    else cout<<"Nieprawidlowy typ"<<endl;
 }

 string  Dog::getBreed(){
    return breed;
 };

 void Dog::getVoice(){
    cout<<"Hau Hau "<<endl;
 };

 void Dog::info(){
    Animal::info();
    cout<<"breed: "<<breed<<endl<<"Lvl guide: "<<levelOfGuideSkills<<" Lvl tracker: "<<levelOfTrackerSkills<<endl;
 }
