#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    /*
    Animal a1(4,"Pies",false);
    a1.info();

    Animal* a2 = new Animal(4,"Kot",true);
    a2->info();*/

    Dog d1(4,"Kot",true,"owczarek",1,1);
    d1.info();

    return 0;
}
