#include <iostream>
#include "PostalCode.h"

PostalCode::PostalCode(string code1){
    code = code1;
    number = 1;
}

void PostalCode::add_number(){
    number++;
}

bool PostalCode::isPostalCode(string code1){
    if(code1 == code) return true;
    else return false;
}

void PostalCode::show(){
    cout<<"Code: "<<code<<" Count:"<<number<<endl;
}

using namespace std;
