#include <iostream>
using namespace std;
class Symbol
{
    public:
        int real,img;
    Symbol(int a,int b)
    {
        real=a;
        img=b;
    }
    Symbol operator+(Symbol &other)
    {
        return Symbol(real+other.real,img+other.img);
    }

};
int main()
{
    //CompileTime Polymorphism(Operator Overloading)
    Symbol c1(3,4);
    Symbol c2(7,8);
    Symbol c3=c1+c2;
    cout<<"Addition of Complex Two Numbers: "<<c3.real<<" + "<<c3.img<<"i";
    return 0;

}