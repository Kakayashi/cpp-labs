#ifndef POSTALCODE_H_INCLUDED
#define POSTALCODE_H_INCLUDED
#include <iostream>

using namespace std;

class PostalCode{
private:
    string code;
    int number;
public:
    PostalCode(string code1);
    void add_number();
    bool isPostalCode(string code1);
    void show();
};

#endif // POSTALCODE_H_INCLUDED
