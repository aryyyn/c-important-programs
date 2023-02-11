// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Class2;
class Class1
{
    int priv1;
    public:
    void set_value1()
    {
        cin>>priv1;
    }
    friend void max(Class1,Class2);
    
    
};

class Class2
{
    int priv2;
    public:
    void set_value2()
    {
        cin>>priv2;
    }
    friend void max(Class1,Class2);
    
};

 void max(Class1 c1, Class2 c2)
{
    if (c1.priv1 > c2.priv2)
    {
        cout<<"Class 1 has the greater value";
    }
    else
    {
        cout<<"Class 2 has the greater value";
    }
}
int main() {
    Class1 c1;
    Class2 c2;
    c1.set_value1();
    c2.set_value2();
    max(c1,c2);

    return 0;
}
