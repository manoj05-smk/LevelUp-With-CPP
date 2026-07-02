#include <iostream>
using namespace std;
int main()
{
    //Student Grade System
    int mark;
    cout<<"Enter Your Marks: ";
    cin>>mark;
    if(mark>=90)
    {
        cout<<"Your Grade is "<<" A+ ";
    }
    else if(mark>=80)
    {
        cout<<"Your Grade is "<<" A ";
    }
    else if(mark>=70)
    {
        cout<<"Your Grade is "<<" B+ ";
    }
    else if(mark>=60)
    {
        cout<<"Your Grade is "<<" B ";
    }
    else if(mark>=50)
    {
        cout<<"Your Grade is "<<" C ";
    }
    else
    {
        cout<<"Sorry!You Were Failed...";
    }
    return 0;
}