#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include <list>
#include "Citizen.h"
#include "City.h"
#include <algorithm>

using namespace std;

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it<<" ";
    cout << '\n';
}

void showCities(vector<City> c){
    for(int i=0; i<c.size(); i++){
        c[i].showCity();
    }
}

int main()
{
    /*
    zad2
    list<int> vec;
    srand (time(NULL));
    int n = rand() % 100+1; //1 do 100
    cout<<"n:"<<n<<endl;
    for(int i=0; i<n; i++){
        int x = rand() % 201 - 100;
        if(x>=0){
            vec.push_front(x);
        }
        else vec.push_back(x);
    }
    showlist(vec);*/

    Citizen c1("Piotr","Piotrowski","21-050",21,'m');
    Citizen c2("Adam","Adamowski","22-050",22,'m');
    Citizen c3("Wojtek","Wojtkowski","23-050",31,'w');
    Citizen c4("Sebastian","Sebastianowski","21-050",41,'m');
    Citizen c5("Jola","Lojalna","28-050",41,'w');
    Citizen c6("ALa","Alowska","22-050",31,'w');
    Citizen c7("Jola","Nielojalna","28-050",41,'w');
    Citizen c8("Bartek","Bartkowski","21-050",31,'m');

    Citizen c12("Piotr2","Piotrowski","21-050",21,'m');
    Citizen c22("Adam2","Adamowski","22-050",22,'m');
    Citizen c32("Wojtek2","Wojtkowski","23-050",31,'w');
    Citizen c42("Sebastian2","Sebastianowski","21-050",41,'m');
    Citizen c52("Jola2","Lojalna","28-050",41,'w');

    Citizen c13("Piotr","Piotrowski","21-050",21,'m');
    Citizen c23("Adam","Adamowski","22-050",22,'m');
    Citizen c33("Wojtek","Wojtkowski","23-050",31,'w');
    Citizen c43("Sebastian","Sebastianowski","21-050",41,'m');
    Citizen c53("Jola","Lojalna","28-050",41,'w');
    Citizen c63("ALa","Alowska","22-050",31,'w');
    Citizen c73("Jola","Nielojalna","28-050",41,'w');
    Citizen c83("Bartek","Bartkowski","21-050",31,'m');
    Citizen c93("Adrian","Adrianowski","99-050",21,'m');

    City Lublin("Lublin");
    Lublin.addCitizen(c1);
    Lublin.addCitizen(c2);
    Lublin.addCitizen(c3);
    Lublin.addCitizen(c4);
    Lublin.addCitizen(c5);
    Lublin.addCitizen(c6);
    Lublin.addCitizen(c7);
    Lublin.addCitizen(c8);

    /*
    Lublin.showCitizens();
    int number_woman_Lublin = Lublin.woman();
    int number_adults_Lublin = Lublin.adults();
    int number_codes_Lublin = Lublin.postal_codes();
    cout<<"Count of postal codes: "<<number_codes_Lublin<<endl;*/


    City Warszawa("Warszawa");
    Warszawa.addCitizen(c12);
    Warszawa.addCitizen(c22);
    Warszawa.addCitizen(c32);
    Warszawa.addCitizen(c42);
    Warszawa.addCitizen(c52);

    City Krakow("Krawkow");
    Krakow.addCitizen(c13);
    Krakow.addCitizen(c23);
    Krakow.addCitizen(c33);
    Krakow.addCitizen(c43);
    Krakow.addCitizen(c53);
    Krakow.addCitizen(c63);
    Krakow.addCitizen(c73);
    Krakow.addCitizen(c83);
    Krakow.addCitizen(c93);

    vector<City> miasta ={Lublin,Warszawa,Krakow};
    showCities(miasta);

 return 0;
 }
