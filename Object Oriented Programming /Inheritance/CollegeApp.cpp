#include <iostream>
#include <string>
using namespace std;
class Person
{
    protected:
        string name;
        int age;
    
    public:
    Person(string nm,int a)
    {
        name=nm;
        age=a;
    }
    void display()
    {
        cout<<"Name: "<<name<<'\n';
        cout<<"Age: "<<age<<'\n';
    }
};
class Faculty:public Person
{
    public:
        int facultyid;
        string desig;
    Faculty(string nm,int a,int id,string des) :  Person(nm,a)
    {
        facultyid=id;
        desig=des;
    }
    void display()
    {
        Person::display();
        cout<<"Faculty ID: "<<facultyid<<'\n';
        cout<<"Designation: "<<desig<<'\n';
    }
};
class Student:public Person
{
    public:
        int studid;
        string dept;
    Student(string nm,int a,int id,string d) :  Person(nm,a)
    {
        studid=id;
        dept=d;
    }
    void display()
    {
         Person::display();
        cout<<"Student ID: "<<studid<<'\n';
        cout<<"Department: "<<dept<<'\n';
    }
};
int main()
{
    //College Management System Using Inheritance
    Faculty f1("Kalai",35,5003,"M.Tech");
    cout<<"Faculty Details:\n";
    f1.display();
    cout<<"----------------------\n";
    Student s1("Manoj",21,105,"ADS");
    cout<<"Student Details:\n";
    s1.display();

    return 0;
}