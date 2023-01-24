 #include <iostream>
 #include "Adding.h"
 #include "Student.h"
 using namespace std;

 template <typename T>
 void showAll(T* tab[], int n)
 {
 for(int i=0;i<n;i++)
 tab[i]->show();
 }


 int main()
 {
 Student<float> s(5,"Ala");
 s.showMark();
 Student<int> s1(5,"Ala");
 s1.showMark();
 Student<string> s2(5,"Ala");
 s2.showMark();


 return 0;
}
