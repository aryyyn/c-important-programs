#include <iostream>
using namespace std;

class Student
{
    char name[50];
    int age;
    public:
    
    void set()
    {
        cout<<endl<<"Enter the name of the student: ";
        cin>>name;
        cout<<endl<<"Enter the age of the student: ";
        cin>>age;
    }
    
    void display()
    {
        cout<<endl<<"The name of the student is: "<<name;
        cout<<endl<<"The age of the student is: "<<age;
    }
};

class Boarder:public Student
{
    int rn;
    public:
    void setboarder()
    {
        cout<<"Enter the room number: ";
        cin>>rn;
    }
    
    void displayboarder()
    {
        cout<<endl<<"The room number is: "<<rn;
    }
    
};

class Dayscholar:public Student
{
    int bn;
    public:
    void setday()
    {
        cout<<"Enter the buss number: ";
        cin>>bn;
    }
    
    void displayday()
    {
        cout<<endl<<"The buss number is: "<<bn;
    }
    
};

int main()
{
    Boarder b1;
    Dayscholar d1;
    int pick;
    cout<<endl<<"Are you a boarder or a Dayscholar?(1/2";
    cin>>pick;
    if (pick == 1)
    {
        b1.set();
        b1.setboarder();
        b1.display();
        b1.displayboarder();
    }
    else
    {
        d1.set();
        d1.setday();
        d1.display();
        d1.displayday();
    }
}
