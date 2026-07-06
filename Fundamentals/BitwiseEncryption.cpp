#include <iostream>
using namespace std;
int main()
{
    //Bitwise Encryption
    const int code=909;
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    //Encryption
    int enc=code^num;
    cout<<"Encrypted Code: "<<enc<<'\n';
    //Decryption
    int dec=enc^code;
    cout<<"Decrypted Code: "<<dec<<'\n';
    return 0;
}