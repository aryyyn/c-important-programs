#include <iostream>
using namespace std;



int main()
{
int *ptr = NULL;
ptr = new int[50];


for(int i =0; i<=5; i++)
{
    cin>>ptr[i];
}

for(int i =0; i<=5; i++)
{
    cout<<endl<<ptr[i];
}
 
}
