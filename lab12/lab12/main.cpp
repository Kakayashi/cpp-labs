#include <iostream>
#include <iostream>
#include<vector>
#include <algorithm>
#include "Car.h"


using namespace std;

int main()
{
    /*
    vector < int > num= {1,2,3,4,5,-2,6,-4,7,8,9};
    //1.1
    for_each(num.begin(),num.end(),
             [](int el){cout<<el<<" |; ";});

    //1.2
    float suma=0;;
    for_each(num.begin(),num.end(),
             [&suma](int el){suma+=el;});
    cout<<endl<<"suma: "<<suma<<" srednia: "<< suma/num.size() <<endl;

    //1.3
    int iloscParzyste=0;;
     for_each(num.begin(),num.end(),
             [&iloscParzyste](int el){if(el%2==0) iloscParzyste++;});
    cout<<endl<<"Ilosc parzystych: "<<iloscParzyste<<endl;

    //1.4
    vector <int>::iterator it = num.begin();
    int it2;
    for_each(num.begin(),num.end(),
             [&it2,it,&num](int el){ if(el<0) num.erase(it+it2); it2++;});
    cout<<endl<<"Usuniecie ujemnych"<<endl;
    for_each(num.begin(),num.end(),
             [](int el){cout<<el<<" |; ";});
    cout<<endl;

    //1.5

    // sort(num.begin(),num.end(),
    //      []( int l, int r ){
     //        if(l&2==0 && r&2==1) return l;
     //        else if((l&2==1 && r&2==0)) return r;
     //           });
      it2 = 0;
      for_each(num.begin(),num.end(),
             [&it2,it,&num](int el){ int temp=el;
                                     num.erase(it+it2);
                                     if(temp&2==0) num.insert(num.begin(), temp);
                                     else num.push_back(temp);
                                     it2++;
                                        });

     cout<<endl<<"sortowanie:"<<endl;
    for_each(num.begin(),num.end(),
             [](int el){cout<<el<<" |; ";});
    cout<<endl;

    //1.6
    num.push_back(-3);
    num.push_back(-4);
    num.push_back(-20);
    num.push_back(0);

    transform(num.begin(),num.end(),num.begin(),
                [](int el){ return el-el*2;});

    cout<<endl<<"odwrotny:"<<endl;
    for_each(num.begin(),num.end(),
             [](int el){cout<<el<<" |; ";});
    cout<<endl;

    //1.6
    int n = 0;
    int suma2=0;
    for_each(num.begin(),num.end(),
             [n,&suma2](int el){if(el<n) suma2++;});
    cout<<endl<<"Ilosc mniejsza od n: "<<suma2<<endl<<endl;
    */


    vector <Car> vec;
    Car c1("fiat",1999,600);
    Car c2("fiat",2001,1000);
    Car c3("fiat",1410,200);
    Car c4("fiat",2555,100);
    Car c5("fiat",996,800);
    Car c6("fiat",1000,9000);
    vec.push_back(c1);
    vec.push_back(c2);
    vec.push_back(c3);
    vec.push_back(c4);
    vec.push_back(c5);
    vec.push_back(c6);

    cout<<"Przed sortowaniem: "<<endl;
    for_each(vec.begin(),vec.end(),[](auto car1){ car1.wyswietl();});

    sort(vec.begin(),vec.end(),[](auto car1,auto car2){
            return car1.getRok()<car2.getRok();
        });
    cout<<endl<<"Rosnaco wzgledem roku: "<<endl;
    for_each(vec.begin(),vec.end(),[](auto car1){ car1.wyswietl();});


    sort(vec.begin(),vec.end(),[](auto car1,auto car2){
            return car1.getPojemnosc()>car2.getPojemnosc();
        });
    cout<<endl<<"Malejaco wzgledem pojemnosci: "<<endl;
    for_each(vec.begin(),vec.end(),[](auto car1){ car1.wyswietl();});

    return 0;
}
