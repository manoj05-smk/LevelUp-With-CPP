#include <iostream>
using namespace std;
int main()
{
    //Type Casting For Integer Division
    int val1,val2;
    cout<<"Enter Divident: ";
    cin>>val1;
    cout<<"Enter Divisor: ";
    cin>>val2;
    cout<<"Without Typecasting "<<val1<<"/"<<val2<<" is "<<val1/val2<<"\n";
    cout<<"With Typecasting "<<val1<<"/"<<val2<<" is "<<static_cast<double> (val1)/val2;
}