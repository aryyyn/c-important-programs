#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
};

int main()
{
    Person p;
    cout<<"Enter the name of the person!: ";
    cin>>p.name;
    cout<<endl<<"Enter the age of the person: ";
    cin>>p.age;
    cout<<endl;
    cout<<"the name of the person is: "<<p.name;
    cout<<endl<<"The age of the person is: "<<p.age;
}