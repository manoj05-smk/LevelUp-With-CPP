#include <iostream>
using namespace std;
int main()
{
    //String Reverse
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    string temp=" ";
    int n=str.length();
    for(int i=n-1;i>=0;i--)
    {
        temp += str.at(i);
    }
    cout<<"Reversed String is"<<temp;
    return 0;
}