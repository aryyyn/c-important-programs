//a simple program on classes and objects

#include <iostream>
using namespace std;

class Hello
{
    char a[50];
    public:
    char b[50];
    protected:
    char c[50];
   
};

int main()
{
    Hello h1;
    h1.b[50] = "Hello";
    cout<<h1.b;
    
}