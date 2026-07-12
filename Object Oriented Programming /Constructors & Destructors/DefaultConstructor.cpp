#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
        string name;
        int age;
    
    Student()
    {
        name="unknown";
        age=0;
    }
    void display()
    {
        cout<<"Student Name : "<<name<<'\n';
        cout<<"Student Age: "<<age<<'\n';
    }
};
int main()
{
    //Creation of Default Constructor
    Student s1;
    s1.display();
    s1.name="Arun";
    s1.age=19;
    s1.display();
    return 0;
}