#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void show( set <int> s)
 {
 set<int>::iterator itr;
 for (itr = s.begin(); itr != s.end(); itr++)
 {
 cout << *itr<<" ";
 }
 cout<<endl;
 }


pair < int, int > zad1(vector<int> vec){
    set<int> s1;
    int duplikat;
    int poprzednia,suma=0;
    for(int i=0; i<vec.size(); i++){
        //cout<<vec[i]<<endl;
        s1.insert(vec[i]);
        if(i>0){
            poprzednia = vec[i-1];
            if(poprzednia==vec[i]){
                duplikat = vec[i];
            }
        }
    }
    show(s1);
    set<int>::iterator itr;
     for (itr = s1.begin(); itr != s1.end(); itr++)
     {
     suma += *itr;
     }

    return make_pair(duplikat,suma);
}

template<typename T>
void zad2( set<T>s11, set<T> s22){
    set<int> roznica;
    //set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),insert_iterator(roznica,roznica.begin()));
    set <int> s1={1,2,3,7};
    set<int>s2={-2,4,1,7,6};
    set<int>sUnion,sIntersec,sDiffer;
     set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),
     insert_iterator(sUnion,sUnion.begin()));
     set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
     insert_iterator(sIntersec,sIntersec.begin()));
     set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),
     insert_iterator(sDiffer,sDiffer.begin()));
     cout<<"sUnion: ";
     show(sUnion);
     cout<<"sIntersec: ";
     show(sIntersec);
     cout<<"sDiffer: ";
     show(sDiffer);

    show(roznica);
}

int main()
{
    vector<int> v1 = {1,2,3,3,4,5,6,7};


    pair<int,int> para = zad1(v1);
    cout<<endl<<"duplikat: "<<para.first<<" suma: "<<para.second<<endl;


    set<int> s1 = {1,2,3,4,5};
    set<int> s2 = {4,5,6,7,8};
    zad2(s1,s2);

    return 0;
}
