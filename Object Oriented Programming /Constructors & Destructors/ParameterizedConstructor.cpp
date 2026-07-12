#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Employee
{
    public:
        string name;
        int age;
        string designation;
        double salary;
    Employee(string n,int a,string desig,double s)
    {
        name = n;
        age = a;
        designation = desig;
        salary = s;
    }
    void display()
    {
        cout<<"Employee Details:\n";
        cout<<"Name: "<<name<<'\n';
        cout<<"Age: "<<age<<'\n';
        cout<<"Designation: "<<designation<<'\n';
        cout<<"Salary: "<<fixed<<setprecision(2)<<salary<<'\n';
        cout<<"---------------------\n";
    }
    ~Employee()
    {

    }
};
int main()
{
    //Parameterized Constructor Creation For Employee Management
    Employee e1("Viswa",21,"B.com",25000.00);
    e1.display();

    Employee e2("Sathis",20,"Bsc",40000.00);
    e2.display();

    Employee e3("Vibin",21,"BE",50000.00);
    e3.display();
    return 0;
}