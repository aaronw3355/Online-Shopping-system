#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <map>

class ShoppingCart{

private:

map<int,int> items;

public:

void addProduct(
int productID,
int quantity);

void removeProduct(
int productID);

double calculateTotal(
vector<Product>& products);

};

#endif
