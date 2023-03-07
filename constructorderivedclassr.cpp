#include <iostream>
using namespace std;

class A 
{
    int a;
    public:
    A()
    {
        cout<<"Class A cons has been called! ";
    }
    A(int a){
        this->a=a;
        cout<<endl<<"Class A para const has been called";
    }
};

class B:public A 
{
    int b;
    public:
    B()
    {
        cout<<"Class B cons has been called";
    }
    B(int b, int a):A(a)
    {
        this->b=b;
        cout<<endl<<"Class B para const has been called!";
    }
    
};
int main()
{
    B b(5,6);
}
