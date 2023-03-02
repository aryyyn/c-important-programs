#include <iostream>
using namespace std;

class Test
{
    public:
    void start();
    void changegear();

};

void Test::start()
{
    cout<<endl<<"The car has been started! ";
    int pick;

    cout<<"Would you like to change gear?(1/2): ";
    cin>>pick;

    if(pick == 1)
    {
        changegear(); //calls another function(nesting of functions)
    }
    else
    {
        cout<<endl<<"Car is set to idle! ";
    }
}


void Test::changegear()
{
    cout<<endl<<"The Gear has been switched! ";
}


int main()
{
    Test t1;
    t1.start();
}
