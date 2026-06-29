#include <iostream>
#include <string>
using namespace std;
int main()
{
    //File Path Generation Using Escape Sequence
    string root;
    string mainfolder;
    string sub1,sub2;
    cout<<"Enter a Root Name: ";
    cin>>root;
    cout<<"Enter a MainFolder Name: ";
    cin>>mainfolder;
    cout<<"Enter SubFolder-1 Name: ";
    cin>>sub1;
    cout<<"Enter SubFolder-1 Name: ";
    cin>>sub2;
    cout<<root<<":\\"<<mainfolder<<"\\"<<sub1<<"\\"<<sub2;
    return 0;
}