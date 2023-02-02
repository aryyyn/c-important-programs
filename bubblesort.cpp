//for bubble sort in c++
#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int size,array[25];
    cout<<"Enter size of the array: ";
    cin>>size;
    for(i =0; i<=size-1; i++)
    {
        cout<<endl<<"Enter the value of array "<< i<<": ";
        cin>>array[i];
    }
    for (i=0; i<=size-1; i++)
    {
        for(j = i+1; j<=size-1; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[j];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout<<endl;
    for(int i =0; i<=size-1; i++)
    {
        cout<<endl<<array[i];
    }
}
