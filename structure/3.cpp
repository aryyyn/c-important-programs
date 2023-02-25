#include <iostream>
using namespace std;

struct Date
{
    int m;
    int y;
};

struct Person
{
    char name[50];
    int age;
    Date doa;
};

int main()
{
    Person p1[50];
    int i, size;
    cout << "Enter the amount of records: ";
    cin >> size;
    for(i = 0; i < size; i++)
    {
        cin >> p1[i].name;
        cin >> p1[i].age;
        cin >> p1[i].doa.m;
        cin >> p1[i].doa.y;
    }
    cout << endl << "Displaying values: ";
    for(i = 0; i < size; i++)
    {
        cout << endl << p1[i].name;
        cout << endl << p1[i].age;
        cout << endl << p1[i].doa.m;
        cout << endl << p1[i].doa.y;
    }
    return 0;
}
