#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {

private:
    int id;
    string name;
    string description;
    double price;
    int stock;

public:

    Product(
        int id,
        string name,
        string description,
        double price,
        int stock
    );

    int getID();

    string getName();

    double getPrice();

    int getStock();

    void updateStock(int quantity);

};

#endif
