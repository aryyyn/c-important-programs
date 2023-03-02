//add 2 numbers using object passing as argument

#include <iostream>
using namespace std;

class Test
{
    int a;
    public:

    void input()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }

    friend void add(Test t1, Test t2)
    {
        int result;
        result = t1.a + t2.a;
        cout<<result;
    }

};

int main()
{
    Test t1, t2;
    t1.input();
    t2.input();
    add(t1,t2);
}
