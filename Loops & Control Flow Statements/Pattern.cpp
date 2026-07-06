#include <iostream>
using namespace std;
int main()
{
    //Pattern Printing
    int row;
    cout<<"Enter the No.Of Rows You Want: ";
    cin>>row;
    //Forward
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //Reversed
    for(int i=0;i<row;i++)
    {
        for(int j=row;j>i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}