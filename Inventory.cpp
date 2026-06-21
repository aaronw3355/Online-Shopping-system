#include "Inventory.h"

void Inventory::addProduct(Product product)
{
    products.push_back(product);
}

void Inventory::displayProducts()
{
    for(Product p : products)
    {
        cout << p.getID()
             << " "
             << p.getName()
             << endl;
    }
}

vector<Product>& Inventory::getProducts()
{
    return products;
}
