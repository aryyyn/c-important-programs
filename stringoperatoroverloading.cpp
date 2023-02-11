#include <iostream>
#include <string.h>
using namespace std;

class Add
{
    char ar [50];
    public:
    Add()
    {
    }
    Add(char *ar)
    {
        strcpy(this->ar,ar);
    }
    void display()
    {
        cout<<endl<<"The value of ar is: "<<ar;
    }
    friend Add operator+(Add a1, Add a2)
    {
        
        strcat(a1.ar, a2.ar);
        return a1;
       
    }
    
};

int main()
{
    Add a1("Aryan"), a2(" likes listening to music");
    Add a3;
    a3 = a1 + a2;
    a3.display();
}
