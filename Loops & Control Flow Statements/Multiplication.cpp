#include <iostream>
using namespace std;
int main()
{
    //Multiplication Table.
    int val,limit;
    cout<<"Which Table You Want? ";
    cin>>val;
    cout<<"Enter a Limit: ";
    cin>>limit;
    for(int i=1;i<=limit;i++)
    {
        cout<<i<<" x "<<val<<" = "<<(i*val)<<'\n';
    }
    return 0;
}