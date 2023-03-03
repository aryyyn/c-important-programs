#include <iostream>
using namespace std;

  class Person
  {
  protected:
    char name[50];
    int age;

  public:
    void setPerson ()
    {
      cout << "Enter the name of the person: ";
      cin >> name;
      cout << "Enter the age of the person: ";
      cin >> age;
    }
    void displayPerson ()
    {
      cout << endl << "The name of the person is: " << name;
      cout << endl << "The age of the person is: " << age;
    }
  };

  class Student:public Person
  {
  protected:
    int roll;
    int marks;

  public:
    void setStudent ()
    {
      cout << "Enter the roll number of the student: ";
      cin >> roll;
      cout << "Enter the marks of the student: ";
      cin >> marks;
    }
    void displayStudent()
    {
        cout<<endl<<"The roll number of the student is: "<<roll;
        cout<<endl<<"The marks of the student is: "<<marks;
    }
  };

  class Employee:public Person
  {
    protected:
    int id;
    int salary;
    char department[50];
    
    public:
    void setEmployee()
    {
        cout<<"Enter the id of the Employee: ";
        cin>>id;
        cout<<"Enter the salary of the Employee: ";
        cin>>salary;
        cout<<"Enter the department of the Employee: ";
        cin>>department;
    }
    void displayEmployee()
    {
        cout<<endl<<"The id of the Employee is: "<<id;
        cout<<endl<<"The salary of the Employee is: "<<salary;
        cout<<endl<<"The department of the Employee is: "<<department;
    }
  };
  
  int main()
  {
      int pick;
      cout<<endl<<"Are you a student or an Employee?(0/1): ";
      cin>>pick;
      if (pick == 0)
      {
          Student s1;
          s1.setPerson();
          s1.setStudent();
          s1.displayPerson();
          s1.displayStudent();
      }
      else if (pick == 1)
      {
          Employee e1;
          e1.setPerson();
          e1.setEmployee();
          e1.displayPerson();
          e1.setEmployee();
      }
      else
      {
          cout<<"wrong pick";
          return 0;
      }
  



  return 0;
}
