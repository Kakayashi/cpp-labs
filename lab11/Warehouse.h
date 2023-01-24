#ifndef WAREHOUSE_H_INCLUDED
#define WAREHOUSE_H_INCLUDED

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Warehouse {
private:
    string name;
    int quantity;
public:
    Warehouse(string name, int quantity) : name(name), quantity(quantity) {}
    string get_name() const { return name; }
    int get_quantity() const { return quantity; }
    void set_quantity(int new_quantity) { quantity = new_quantity; }
    void display_info() const { cout << "Warehouse: " << name << ", Quantity: " << quantity << endl; }
    ~Warehouse() { cout << "Warehouse destructor" << endl; }
};

#endif // WAREHOUSE_H_INCLUDED
