//a question of function overloading
//wap to add 2 and 3 numbers using the same function name(also known as function overloading)

#include <iostream>
using namespace std;


void add(int a, int b, int c)
{
    return (a+b+c);
}

void add(int a, int b)
{
    return (a+b);
}

int main()
{
    int a,b,c;
    int pick;
    cout<<endl<<"Enter the value of a, b and c: ";
    cin>>a>>b>>c;
    cout<<endl<<"Do you want to add 2 or 3 numbers?(0/1): ";
    cin>>pick;

    if (pick == 0)
    {
        cout<<endl<<"The value after adding two numbers is: "<<add(a,b);
    }
    
    if (pick == 1)
    {
        cout<<endl<<"The value after adding three numbers is: "<<add(a,b,c);
    }
}
