#include <iostream>
using namespace std;


void dad(char b)
{
    cout<<b;
}

int main()
{
    char a[50] = "a";
    dad(*a);
}