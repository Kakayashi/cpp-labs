#include <iostream>
#include "Warehouse.h"
#include "Shop.h"
#include <vector>
#include <memory>

using namespace std;

int main() {
    vector<shared_ptr<Shop>> shops;
    shops.push_back(make_shared<Shop>("Bookstore"));
    shops.push_back(make_shared<Shop>("Computer Store"));

    auto warehouse1 = make_shared<Warehouse>("Books", 100);
    auto warehouse2 = make_shared<Warehouse>("Computers", 50);

    shops[0]->add_warehouse(warehouse1);
    shops[1]->add_warehouse(warehouse2);
    shops[1]->add_warehouse(warehouse1);

    shops[0]->sell_goods("Books", 25);
    shops[1]->sell_goods("Computers", 25);
    shops[1]->sell_goods("Books", 25);

    shops[0]->display_warehouses();
    cout<<endl<<endl;
    shops[1]->display_warehouses();
    cout<<endl<<endl;
    warehouse1->display_info();
    warehouse2->display_info();

    return 0;
}
