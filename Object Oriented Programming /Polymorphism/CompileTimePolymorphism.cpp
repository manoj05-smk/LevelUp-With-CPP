#include <iostream>
using namespace std;
class Addition
{
    public:
        void add(int a,int b)
        {
            cout<<"Addition of "<<a<<" & "<<b<<" is "<<a+b<<endl;
        }
        void add(double a,double b)
        {
            cout<<"Addition of "<<a<<" & "<<b<<" is "<<a+b<<endl;
        }
        void add(int a,double b)
        {
            cout<<"Addition of "<<a<<" & "<<b<<" is "<<a+b<<endl;
        }
};
int main()
{
    //CompileTime Polymorphism (Function Overloading)
    Addition a1;
    a1.add(5,4);
    a1.add(6.9,44.5);
    a1.add(5,9.7);
    return 0;
}