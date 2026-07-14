#include <iostream>
#include <string>
using namespace std;
class Bank
{
    private:
        double balance;
    public:
        string name;
        int accno;
    
    Bank(string n,int acc)
    {
        name=n;
        accno=acc;
        balance=0;
    }
    void deposit(double amt)
    {
        if(amt>0)
        {
            cout<<"Rs "<<amt<<" deposited Sucessfully...\n";
            balance +=amt;
        }
        else
        {
            cout<<"Invalid Deposit..!\n";
        }
    }
    void withdraw(double amt)
    {
        if(balance<amt)
        {
            cout<<"Invalid Balance..!\n";
        }
        else
        {
            cout<<"Rs "<<amt<<" withdrawn Sucessfully...\n";
            balance -= amt;
        }
    }
    double getBalance()
    {
        return balance;
    }

    ~Bank()
    {

    }
};
int main()
{
    //Banking Application Using Encapsulation
    string name;
    int accno;
    cout<<"Enter Your Name: ";
    getline(cin,name);
    cout<<"Enter Your Account No: ";
    cin>>accno;
    Bank b1(name,accno);
  
    int choice;
    double amt;
    do
    {
        cout<<"Menu:\n";
        cout<<"1.Depsoit\n2.Withdraw\n3.Check Balance\n4.Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter Amount to Deposit: ";
                cin>>amt;
                b1.deposit(amt);
                break;
            case 2:
                cout<<"Enter Amount to Withdraw: ";
                cin>>amt;
                b1.withdraw(amt);
                break;
            case 3:
                cout<<"Your Balance amount is Rs "<<b1.getBalance()<<'\n';
                break;
            case 4:
                cout<<b1.name<<" --> Thank You For your Visit..!\n";
                break;
            default:
                cout<<"Invalid Choice...!Try Again...\n";
        }
    }
    while (choice != 4);
    
    return 0;
}