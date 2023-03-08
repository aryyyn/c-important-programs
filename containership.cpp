#include <iostream>
using namespace std;
//has a relationship or aggregation or containership!
class Utils
{
    public:
    void clutch()
    {
        cout<<endl<<"Clutch was pressed!";
    }
    void accelerator()
    {
        cout<<endl<<"accelerator was pressed!";
    }
    void brake()
    {
        cout<<endl<<"Brake was pressed! ";
    }
};

class Car
{
    public:
    Utils u1;
    void gear()
    {
    u1.clutch();
    }
    void moveForward()
    {
    u1.accelerator();
    }
};

int main()
{
    Car c1;
    c1.gear();
    c1.moveForward();
}
