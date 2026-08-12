#include <iostream>
using namespace std;
void printreverse(int *arr,int n)
{
    cout<<"\nAfter Reverse:\n";
    for(int i=n-1;i>=0;i--)
    {
        cout<<" "<<*(arr+i);        
    }
}
int main()
{
    //Array Reversing using Pointer Arithmetic
    int arr[]={6,7,8,9,10,11,12,13,14,15,16};
    int lim=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Reverse:\n";
    for(int i=0;i<lim;i++)
    {
        cout<<" "<<arr[i];
    }
    printreverse(arr,lim);
    return 0;
}