#ifndef SHOP_H_INCLUDED
#define SHOP_H_INCLUDED
#include <iostream>
#include <vector>
#include <memory>
#include "Warehouse.h"
using namespace std;


class Shop {
private:
    string name;
    vector<shared_ptr<Warehouse>> warehouses;
public:
    Shop(string name) : name(name) {}
    string get_name() const { return name; }
    void add_warehouse(shared_ptr<Warehouse> warehouse) { warehouses.push_back(warehouse); }
    void sell_goods(string name, int quantity) {
        for (const auto& warehouse : warehouses) {
            if (warehouse->get_name() == name && warehouse->get_quantity() >= quantity) {
                warehouse->set_quantity(warehouse->get_quantity() - quantity);
                cout << "Sold " << quantity << " " << name << " from " << warehouse->get_name() << endl;
                return;
            }
        }
        cout << "Not enough " << name << " in stock" << endl;
    }
    void display_warehouses() const {
        cout << "Warehouses used by " << name << ":" << endl;
        for (const auto& warehouse : warehouses) {
            cout << warehouse->get_name() << endl;
        }
    }
    ~Shop() { cout << "Shop destructor" << endl; }
};

#endif // SHOP_H_INCLUDED
