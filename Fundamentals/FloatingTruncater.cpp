#include <iostream>
using namespace std;
int main()
{
    //Floating Point Precision Truncator (2 decimal places only)
    double val;
    cout<<"Enter a Number (Type: Double with Multiple Decimal): ";
    cin>>val;
    int result = val * 100;
    cout<<"After Truncated into 2 Decimal of "<<val<<" is "<<static_cast<double> (result)/100;
    return 0;
}