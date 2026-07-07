#include <iostream>
using namespace std;
int main()
{
    //Average of an Array
    int arr[] = {5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<"Average Of an Array is "<<static_cast<double>(sum)/n;
    return 0;
}
