#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string>cars;
    cars.push("Tata");
    cars.push("BMW");
    cars.push("Suzuki");
    
    if (!cars.empty())
    {
        cout<<"first pop";
        cout<<endl<<cars.front()<<endl;
        cars.pop();
    }
    if (!cars.empty())
    {
        cout<<"second pop";
        cout<<endl<<cars.front()<<endl;
        cars.pop();
    }
}
