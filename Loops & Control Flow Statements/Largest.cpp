#include <iostream>
using namespace std;
int main()
{
    //Largest Number Among 3
    int num1,num2,num3;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;
    int result=(num1>num2 && num1>num3) ? num1 : ( (num2>num3) ? num2 : num3 );
    cout<<"Largest Among 3 Number is "<<result;
    return 0;
}