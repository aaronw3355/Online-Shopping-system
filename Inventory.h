#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Product.h"

class Inventory {

private:
    vector<Product> products;

public:
    void addProduct(Product product);

    void removeProduct(int id);

    void displayProducts();

    vector<Product>& getProducts();
};

#endif
