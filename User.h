class User{

protected:

string name;
string email;
string address;

ShoppingCart cart;

public:

User(
string n,
string e,
string a);

virtual double getDiscount()=0;

ShoppingCart& getCart();

};
