#include <iostream>
using namespace std;

class Exam
{
    int x;
    public:
    Exam()
    {
    }
    Exam(int x)
    {
        this->x=x;
    }
    
    void display()
    {
        cout<<endl<<"The value of x is: "<<x;
    }
    friend Exam operator-(Exam e1)
    {
        Exam temp;
        temp.x = e1.x - 1;
        return temp;
    }
};

int main()
{
    Exam e1(5),e2;
    e2 = -e1;
    e2.display();
    
}