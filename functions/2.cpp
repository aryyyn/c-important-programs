#include <iostream>
using namespace std;

void hello(int &b)
{
    cout<<b;
    b = 10;
}

int main()
{
    int a;
    cout<<endl<<"Enter the value of a: ";
    cin>>a;
    hello(a);
    cout<<endl<<"The value of a is"<<a;
    int c;
    c = &a;
    cout<<endl<<c;

}