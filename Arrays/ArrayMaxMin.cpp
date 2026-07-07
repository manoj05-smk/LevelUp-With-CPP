#include <iostream>
using namespace std;
int min(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int max(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    //Find the Minimum and Maximum Element of an Array
    int n;
    cout<<"Enter No.Of Elements to Store: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: "<<'\n';
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum Element is "<<min(arr,n)<<'\n'<<"Maximum Element is "<<max(arr,n);
    return 0;  
}