#include "Citizen.h"
#include "City.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "PostalCode.h"

using namespace std;

City::City(string name){
    city_name = name;
}

void City::addCitizen(Citizen new_citizen){
    citizens.push_back(new_citizen);
}

void City::deleteCitizen(int age1, string surname1){
    for(int i=0; i<citizens.size(); i++){
            int age =citizens[i].getAge();
            string surname = citizens[i].getSurname();
        if(  age == age1 && surname==surname1){
            citizens.erase(citizens.begin()+i);
        }
    }
}

void City::showCitizens(){
     for(int i=0; i<citizens.size(); i++){
        citizens[i].show();
     }
}
void City::showCity(){
    cout<<"City name: " << city_name<< " Population: "<<citizens.size() <<endl;
}

int City::woman(){
    int wom = 0;
     for(int i=0; i<citizens.size(); i++){
         char sign =citizens[i].getSex();
         if( sign=='w' ){
           wom++;
         }
     }
     cout<<"Number of womans: "<<wom<<endl;
     return wom;
}

int City::adults(){
    int ad = 0;
     for(int i=0; i<citizens.size(); i++){
         int age =citizens[i].getAge();
         if(age>=18){
           ad++;
         }
     }
     cout<<"Number of adults:" <<ad<<endl;
     return ad;
}

int City::postal_codes(){
    list<PostalCode> codes;

    for(int i=0; i<citizens.size(); i++){
        string new_code = citizens[i].getPostalCode();
        bool add_trigger = true;
        list<PostalCode>::iterator it;
        for (it = codes.begin(); it != codes.end(); ++it){
            bool trigger = it->isPostalCode(new_code);
            if(trigger){
                add_trigger = false;
                it->add_number();
            }
        }
        if(add_trigger){
            PostalCode c1(new_code);
            codes.push_back(c1);
        }
    }

    list<PostalCode>::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it){
        it->show();
    }
    return codes.size();
}



