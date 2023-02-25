//wap to caluclate simple floaterest using default value of r = 1.5% . ask the user for principal amount and time

#include <iostream>
using namespace std;

void simplefloaterest(float p, float t, float r = 1.5)
{
    float result;
    result = (p*t*r)/100;
    cout<<endl<<"Result is: "<<result;

}

int main()
{
    float p,t,r,pick;
    cout<<endl<<"Enter the value of p: ";
    cin>>p;
    cout<<endl<<"Enter the time: ";
    cin>>t;
    
    cout<<endl<<"Would you like to enter your own floaterest or continue with the default one?(0/1): ";
    cin>>pick;
    if (pick == 0)
    {
    cout<<"enter the rate: ";
    cin>>r;
    simplefloaterest(p,t,r);
    }
    else
    {
        simplefloaterest(p,t);
    }
    

}