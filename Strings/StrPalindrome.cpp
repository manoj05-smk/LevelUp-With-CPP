#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    //String Palindrome check
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    int n=str.length();
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(tolower(str[i]) != tolower(str[n-1-i]))
        {
            flag = 1;
            break;            
        }
    }
    if(flag)
    {
        cout<<"Not a Palindrome...";
    }
    else
    {
        cout<<"It is a Palindrome...";
    }
    return 0;
}