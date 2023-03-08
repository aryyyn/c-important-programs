//2 or more exception handling!!

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    try
    {
        if (a > 2)
        {
            throw 404;
        }
    }
    catch(int a)
    {
        cout<<a;
    }
    
    try 
    {
        if (b> 2)
        {
            throw "error";
        }
    }
    catch(const char *a)
    {
        cout<<a;
    }
}