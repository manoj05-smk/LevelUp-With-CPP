#include <iostream>
using namespace std;
int main()
{
    //Coin Count Calculator
    int money;
    cout<<"Enter Money to Change: ";
    cin>>money;

    //Coins: 25rs,10rs,5rs,2rs,1rs

    int count1=money/25; //25rs
    int rem1=money%25;

    int count2=rem1/10; //10rs
    int rem2=rem1%10;

    int count3=rem2/5; //5rs
    int rem3=rem2%5;

    int count4=rem3/2; //2rs
    int rem4=rem3%2;

    int count5=rem4; //1rs

    int total=count1+count2+count3+count4+count5;

    cout<<"Total No.of Coins: "<<total<<"\n";
    cout<<"--------------------\n";
    cout<<"No.of 25rs Coins: "<<count1<<"\n";
    cout<<"No.of 10rs Coins: "<<count2<<"\n";
    cout<<"No.of 5rs Coins: "<<count3<<"\n";
    cout<<"No.of 2rs Coins: "<<count4<<"\n";
    cout<<"No.of 1rs Coins: "<<count5<<"\n";
    return 0;
}