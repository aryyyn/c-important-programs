//conversion from basic type to class type
//can be done using constructors
#include <iostream>
using namespace std;

class Value 
{
    int x;
    public:
    Value()
    {
        
    }
    Value(int x) {this->x=x;}
    
    void display()
    {
        cout<<"\n The value of x is: "<<x;
    }
};

int main()
{
  Value v1(50);
  v1.display();
}

