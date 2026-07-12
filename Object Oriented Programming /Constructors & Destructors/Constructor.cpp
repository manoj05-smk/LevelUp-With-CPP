#include <iostream>
using namespace std;
class Student
{
    public:
        Student()
        {
            cout<<"Constructor Called.\n";
        }
};
int main()
{
    //Construtor Creation
    Student s1;
    return 0;
}