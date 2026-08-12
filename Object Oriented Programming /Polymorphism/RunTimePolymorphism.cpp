#include <iostream>
using namespace std;
class Animal
{
    public:
        virtual void sound()
        {
            cout<<"Animal Sound..."<<endl;
        }
};
class Dog:public Animal
{
    public:
        void sound()
        {
            cout<<"Dog Barks..."<<endl;
        }

};
class Cat:public Animal
{
    public:
        void sound()
        {
            cout<<"Cat Meow..."<<endl;
        }

};
int main()
{
    //Polymorphism (Runtime Polymorphism)
    Animal *a1 = new Dog();
    a1->sound();
    Animal *a2 = new Cat();
    a2->sound();
    return 0;
}