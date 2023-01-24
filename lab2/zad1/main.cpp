#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
using namespace std;
int main()
{
Figure* f1=new Square(10);
Figure* f2=new Circle(10);
 f1->calculateArea();
 f1->show();
 f2->calculateArea();
 f2->show();
 f1->calculateCircuit();
 f1->show();
f2->calculateCircuit();
 f2->show();
 delete f1;
 delete f2;
 return 0;
 }
