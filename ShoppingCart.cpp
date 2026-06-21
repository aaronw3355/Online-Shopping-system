#include "ShoppingCart.h"

void ShoppingCart::addProduct(
int productID,
int quantity)
{
items[productID]+=quantity;
}

void ShoppingCart::removeProduct(
int productID)
{
items.erase(productID);
}
