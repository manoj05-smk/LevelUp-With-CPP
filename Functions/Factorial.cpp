#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==1) //Base Case
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    //Factorial using Recursion
    int num;
    cout<<"Enter a Number to Find: ";
    cin>>num;
    int result=fact(num);
    cout<<num<<" Factorial is "<<result;
    return 0;
}