//conversion from class type to basic type
//can be done using casting operators
#include <iostream>
using namespace std;

class Value 
{
    int x;
    public:
    Value(){}
    Value(int x) {this->x=x;}
    
    void display()
    {
        cout<<"\n The value of x is: "<<x;
    }


operator int()
{
    int x;
    x = this->x + 50;
    return x;
}
};

int main()
{
    Value v1(50);
    int x;
    x = v1.operator int();
    cout<<x;
}

