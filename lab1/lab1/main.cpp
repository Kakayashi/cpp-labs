#include <iostream>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
using namespace std;
int main()
{
    /*
Person p1[3];
Person* p2;
Person* p3[3];
Person** p4;
for(int i=0; i<3; i++)
{
p1[i].init("Anna","Nowak",20+i);
p1[i].showInfoPerson();
}
 p2=new Person[3];
 for(int i=0; i<3; i++)
 {
 p2[i].init("Ola","Adamek",20+i);
 p2[i].showInfoPerson();
 }
 for(int i=0; i<3; i++)
 {
 p3[i]=new Person("Kasia","Kowalska",20+i);
 p3[i]->showInfoPerson();
 }
 p4=new Person*[3];
 for(int i=0; i<3; i++)
 {
 p4[i]=new Person("Pawel","Wojcik",20+i);
 p4[i]->showInfoPerson();
 }
 for(int i=0;i<3;i++){
 delete p3[i];
 }
 for(int i=0;i<3;i++){
 delete p4[i];
 }
 delete [] p4;*/

Student p1[3];
Student* p2;
Student* p3[3];
Student** p4;

for(int i=0; i<3; i++)
{
p1[i].init("Anna","Nowak",20+i);
p1[i].showInfoPerson();
}

p2=new Student[3];
 for(int i=0; i<3; i++)
 {
 p2[i].init("Ola","Adamek",20+i);
 p2[i].showInfoPerson();
 }

 for(int i=0; i<3; i++)
 {
 p3[i]=new Student("Kasia","Kowalska",20+i,"x");
 p3[i]->showInfoPerson();
 }

 p4=new Student*[3];
 for(int i=0; i<3; i++)
 {
 p4[i]=new Student("Pawel","Wojcik",20+i,"X");
 p4[i]->showInfoPerson();
 }
 for(int i=0;i<3;i++){
 delete p3[i];
 }
 for(int i=0;i<3;i++){
 delete p4[i];
 }
 delete [] p4;


 return 0;
 }
