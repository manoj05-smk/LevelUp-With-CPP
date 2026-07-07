#include <iostream>
using namespace std;
int RecursiveSum(int n)
{
    if(n==1) //Base Case
    {
        return 1;
    }
    return n+RecursiveSum(n-1);
}
int main()
{
    //Sum of Natural Numbers Using Recursion
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    int result=RecursiveSum(num);
    cout<<"Sum Of Natural Numbers Upto "<<num<<" is "<<result;
    return 0;
}