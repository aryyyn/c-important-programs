/*inline function
to implement inline function, all you have to do is write a normal function and add "inline" keyword at the beginning of the function call*/

#include <iostream>
using namespace std;

 inline void hello()
{
    cout<<"hello";
    cout<<endl<<"I am an inline function!";
}
void goodbye()
{
    cout<<endl<<"goodbye!";
    cout<<endl<<"I am a normal function!";
}

int main()
{
    hello(); //inline is faster than normal function. we can prove this using threads
    goodbye();
}
