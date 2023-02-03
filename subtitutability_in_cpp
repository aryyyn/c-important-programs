//Lets say we have a class A and class B which is a sub class of class A. We can substitute object of class A with object of class B without breaking the program
//observe the following program

#include <iostream>
using namespace std;

class A
{
public:
    void displaya()
    {
        cout<<"\nThis is A";
    }
};

class B:public A
{
    public:
    void displayb()
    {
        cout<<"\nThis is B ";
    }
};
void test2(A aobj)
{
    aobj.displaya();
    
}

void test()
{
    B bobj;
    bobj.displayb();
    test2(bobj);
}


int main()
{
    test();
    return 0;
}

