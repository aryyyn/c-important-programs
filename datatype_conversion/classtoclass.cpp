#include <iostream>
#include <math.h>
using namespace std;

class Polar
{
    double radius, angle;
    public:
    Polar(){}
    Polar(double radius, double angle)
    {
        this->radius = radius;
        this->angle = angle;
    }
    friend class Rectangle;
    
};

class Rectangle
{
    double x, y;
    public:
    Rectangle(){}
    Rectangle(Polar p)
    {
        double radian = p.radius * M_PI /180;
        x = p.radius * cos(radian);
        y = p.radius * sin(radian);
    }
    void display()
    {
        cout<<"The value of x is: "<<x;
        cout<<"The value of y is: "<<y;
    }
};

int main()
{
    Polar p1(5,60);
    Rectangle r1(p1);
    r1.display();
}
