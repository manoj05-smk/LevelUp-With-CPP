#include <iostream>
using namespace std;
int main()
{
    //Swapping Using Arithmetic Operators
    int a,b;
    cout<<"Enter value For a = ";
    cin>>a;
    cout<<"Enter value For b = ";
    cin>>b;
    cout<<"Before Swap: a = "<<a<<" b = "<<b<<"\n";

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After Swap: a = "<<a<<" b = "<<b;
    return 0;
}