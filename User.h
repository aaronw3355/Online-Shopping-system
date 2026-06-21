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

class RegularUser:
public User{

public:

RegularUser(
string n,
string e,
string a)
:
User(n,e,a)
{}

double getDiscount(){

return 0;

}

};

double getDiscount(){

return .10;

}

double getDiscount(){

return .20;

}
