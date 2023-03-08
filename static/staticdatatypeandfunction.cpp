//static
#include <iostream>
using namespace std;

class Test 
{
    static int a;
    int b;
    public:
    void input()
    {
        cout<<endl<<"Enter the value of a: ";
        cin>>a;
    }
    static void display()
    {
        cout<<endl<<"The value of a is: "<<a;
     
    }

};

int Test::a=0;

int main()
{
    Test t1,t2,t3;
    t1.input();
    t3.display();
}