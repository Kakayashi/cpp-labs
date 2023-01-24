#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>

using namespace std;

class Car{
private:
   string model;
   int rok,pojemnosc;
public:
    Car(string model1, int rok1, int pojemnosc1){
    rok = rok1;
    model = model1;
    pojemnosc = pojemnosc1;
    }
    void setRok(int rok1){
     rok = rok1;
    }
    void setPojemnosc(int pojemnosc1){
     pojemnosc = pojemnosc1;
    }
    void setModel(string model1){
     model = model1;
    }
    int getRok(){
        return rok;
    }
    int getPojemnosc(){
        return pojemnosc;
    }
    string getModel(){
        return model;
    }

    void wyswietl(){
        cout<<"model: "<<model<<" rok: "<<rok<<" pojemnosc: "<<pojemnosc<<endl;
    }



};

#endif // CAR_H_INCLUDED
