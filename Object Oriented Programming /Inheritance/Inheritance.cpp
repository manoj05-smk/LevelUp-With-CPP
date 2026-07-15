#include <iostream>
#include <string>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<"Animal makes Sound...\n";
        }
        ~Animal()
        {
            cout<<"Animal Destroyed...\n";
        }

};
class Dog:public Animal
{
    public:
        Dog()
        {
            cout<<"Dog Barks...\n";            
        }
        ~Dog()
        {
            cout<<"Dog Destroyed...\n";
        }

};
int main()
{
    //Inheritance Execution Order
    Dog d1;
    cout<<"-----------------\n";
    return 0;
}