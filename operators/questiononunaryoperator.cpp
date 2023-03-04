//class name complex, data member real and imaginary, default and parameterized constructors are used, overload unary ++ operator where real and imaginary numbers will be incremented
//and also add these two complex numbers using the + operator

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
    Complex()
    {
        real=0;
        imaginary=0;
    }
    Complex(int real, int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    
    friend void operator++(Complex &c1,int)
    {
        Complex unary;
        unary.real = c1.real + 1;
        unary.imaginary = c1.imaginary + 1;
        cout<<endl<<"The real number is: "<<unary.real;
        cout<<endl<<"The imaginary number is: "<<unary.imaginary;

    }
    
 
    friend void operator+(Complex c1, Complex c2)
    {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        cout<<endl<<"The real number is: "<<temp.real;
        cout<<endl<<"The imaginary number is: "<<temp.imaginary;
    }
    
};

int main()
{
    Complex c1(5,2),c2(2,3);
    c1+c2;
    c1++;
    c2++;
    
}
