#include <iostream>
using namespace std;
class Class2;
class Class1
{
    int x;
    public:
    void set()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    void display()
    {
        cout<<endl<<"The value of x is: "<<x;
    }
    friend void Compare(Class1&, Class2&);
};

class Class2
{
    int x;
    public:
    void set()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
    }
        void display()
    {
        cout<<endl<<"The value of x is: "<<x;
    }
    friend void Compare(Class1&, Class2&);
};

void Compare(Class1 &c1, Class2 &c2)
{
    int temp;
    temp = c1.x;
    c1.x = c2.x;
    c2.x = temp;
}

int main()
{
    Class1 c1;
    Class2 c2;
    c1.set();
    c2.set();
    cout<<endl<<"Before Swapping! ";
    c1.display();
    c2.display();
    cout<<endl<<"After Swapping! ";
    Compare(c1,c2);
     c1.display();
    c2.display();
    //Compare(c1,c2);
}
