#include <iostream>
using namespace std;


template <typename t1, typename t2>
class Multiply
{
    public:
    t1 intn1;
    t2 intn2;
    Multiply(t1 intn1, t2 intn2)
    {
        this->intn1 = intn1;
        this->intn2 = intn2;
    }
    void displaymultiply()
    {
        cout<<endl<<"multiply: "<<intn1*intn2;
    }
};

template <typename t3, typename t4>
class Divide
{
    public:
    t3 f1;
    t4 f2;
    Divide(t3 f1, t4 f2)
    {
        this->f1=f1;
        this->f2=f2;
    }
    void displaydivide()
    {
        cout<<endl<<"Divide: "<<f1/f2;
    }
};
int main()
{
    Multiply<int,int> m1(2,3);
    Divide<float,float> d1(3.5,2.5);
    m1.displaymultiply();
    d1.displaydivide();
    return 0;
}
