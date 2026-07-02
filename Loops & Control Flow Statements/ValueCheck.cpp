#include <iostream>
using namespace std;
int main()
{
    //Value Check ( +ive or -ive)
    int val;
    cout<<"Enter a Value: ";
    cin>>val;
    if(val>0)
    {
        cout<<"Positive Number";
    }
    else if(val<0)
    {
        cout<<"Negative Number";
    }
    else
    {
        cout<<"Equal to Zero";
    }
    return 0;
}