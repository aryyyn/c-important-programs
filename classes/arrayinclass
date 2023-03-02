//array for objects

#include <iostream>
using namespace std;

class Employee
{
    char name[50];
    char address[50];
    float salary;
    int id;
    char post[50];

    public:
    void input();
    void display();
    
};

void Employee::input()
{
    cout<<endl<<"Enter the name of the user: ";
    cin>>name;
    cout<<endl<<"Enter the address of the user: ";
    cin>>address;
    cout<<endl<<"Enter the salary of the user: ";
    cin>>salary;
    cout<<endl<<"Enter the id of the user: ";
    cin>>id;
    cout<<endl<<"Enter the post of the user: ";
    cin>>post;
}

void Employee::display()
{
    cout<<endl<<"The name of the user is: "<<name;
    cout<<endl<<"The address of the user is: "<<address;
    cout<<endl<<"The salary of the user is: "<<salary;
    cout<<endl<<"The id of the user is: "<<id;
    cout<<endl<<"The post of the user is: "<<post;
}

int main()
{
    int size,i;
    cout<<endl<<"How many records would you like to enter?: ";
    cin>>size;
    Employee e1[size];
    
    for(i = 0; i<=size-1; i++)
    {
        cout<<endl<<"For user number "<<i;
        e1[i].input();
    }
    for(i = 0; i<=size-1; i++)
    {
        e1[i].display();
    }
    

}

