//object poitner
//used to access functions inside a class with a pointer using the object of the class

#include <iostream>
using namespace std;

class Pointer
{
    int number;
    public:
    void set(int n)
    {
        number = n;
    }
    void display()
    {
        cout<<endl<<"The number is: "<<number;
    }
    
};
int main()
{
    Pointer p1,*p;
    p = &p1;
    p1.set(5);
    p->display();
}
