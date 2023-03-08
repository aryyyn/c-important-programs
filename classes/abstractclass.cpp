#include <iostream>
using namespace std;

class A 
{
    protected:
    int a=5,b=5;
    public:
    virtual void calulcate() = 0;
};

class B:public A
{
    public:
    void calulcate()
    {
        cout<<endl<<a+b;
    }
};

class C:public A 
{
    public:
    void calulcate()
    {
        cout<<endl<<a*a;
    }
};

int main()
{
    A *ptr;
    B b;
    C c;
    ptr = &b;
    ptr -> calulcate();
    ptr = &c;
    ptr -> calulcate();
}
