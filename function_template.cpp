#include <iostream>
using namespace std;

template <typename t1, typename t2>

class Hello
{
    t1 num; 
    t2 num2;
    public:
    Hello()
    {
        
    }
    Hello(t1 num, t2 num2)
    {
        this->num=num;
        this->num2=num2;
    }
    void display()
    {
        cout<<"\ninteger value is: "<<num;
        cout<<"\nfloat value is: "<<num2;
    }
};

int main()
{
    Hello<int, float> h1(2,3.5), h2(3,2.5);
    h1.display();
    h2.display();
}
