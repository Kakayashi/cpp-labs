#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "Person.h"

class Student: public Person
{
private:
string index;
public:
 Student(string name1, string surname1,int age1, string index);
 Student();
 void setIndex(string newIndex);
 string getIndex();
 void showInfoStudent();
 };

#endif // STUDENT_H_INCLUDED
