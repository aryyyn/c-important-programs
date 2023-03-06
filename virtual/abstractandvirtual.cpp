#include <iostream>
using namespace std;

class Shape
{
    protected:
    double length, width;
    public:
    void set()
    {
        cin>>length>>width;
    }
    virtual void area() = 0;
};

class Rectangle:public Shape
{
    void area()
    {
        cout<<length*width;
    }
};

int main()
{
    Rectangle r1;
    r1.set();
    Shape *ptr;
    ptr = &r1;
    ptr -> area();
}