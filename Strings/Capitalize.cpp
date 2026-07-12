#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    //Capitalize the First Letter of Every Word
    string str;
    cout<<"Enter a Sentence: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(i==0 || (str[i-1] == ' ' && str[i] != '\0'))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout<<"Output Sentence: "<<str;
    return 0;
}