#include <iostream>
using namespace std;
int main()
{
    //Menu Driven Calculator
    int val1,val2;
    cout<<"Enter a Value-1: ";
    cin>>val1;
    cout<<"Enter a Value-2: ";
    cin>>val2;
    int choice;
    cout<<"Menu:\n";
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter Your Choice: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"Addition of "<<val1<<" & "<<val2<<" is "<<val1+val2;
            break;
        case 2:
            cout<<"Subtraction of "<<val1<<" & "<<val2<<" is "<<val1-val2;
            break;
        case 3:
            cout<<"Multiplication of "<<val1<<" & "<<val2<<" is "<<val1*val2;
            break;
        case 4:
            cout<<"Division of "<<val1<<" & "<<val2<<" is "<< static_cast<double>(val1)/val2;
            break;
        default:
            cout<<"Invalid Choice..!";
    }
    return 0;
}