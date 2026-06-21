#include "Product.h"

Product::Product(
    int id,
    string name,
    string description,
    double price,
    int stock)
{
    this->id=id;
    this->name=name;
    this->description=description;
    this->price=price;
    this->stock=stock;
}

int Product::getID(){
    return id;
}

string Product::getName(){
    return name;
}

double Product::getPrice(){
    return price;
}

int Product::getStock(){
    return stock;
}

void Product::updateStock(int quantity){
    stock += quantity;
}
