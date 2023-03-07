#include <iostream>
using namespace std;

class Rupees;
class Dollars
{
    double dollar;
    public:
    Dollars(){}
    
    Dollars(double dollar)
    {
        this->dollar=dollar;
    }
    
    void dispdollar()
    {
        cout<<"\n The value of dollar is: "<<dollar;
    }
    friend class Rupees;
};

class Rupees
{
    double rupee;
    public:
    Rupees(Dollars d)
    {
    rupee = d.dollar * 130.48;
    }
    void disprupee()
    {
        cout<<"\n The value of rupee is: "<<rupee;
    }
};

int main()
{
    Dollars d1(5);
    d1.dispdollar();
    Rupees r1(d1);
    r1.disprupee();
}
