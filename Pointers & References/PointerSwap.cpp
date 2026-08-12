#include <iostream>
using namespace std;
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    //Elements Swap Using Pass by reference
    int a,b;
    cout<<"Enter a Value 1: ";
    cin>>a;
    cout<<"Enter a Value 2: ";
    cin>>b;
    cout<<"Before Swap: a="<<a<<" b="<<b<<'\n';
    swap(&a,&b);
    cout<<"After Swap: a="<<a<<" b="<<b;
    return 0;
}