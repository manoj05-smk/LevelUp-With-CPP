#include <iostream>
#include <string>
using namespace std;
class Voter
{
    private:
        int age;

    public:
        void setAge(int a)
        {
            if(a>=18)
            {
                age=a;
            }
            else
            {
                cout<<"You are Not Eligible..!";
            }
        }
        int getAge()
        {
            return age;
        }
};
int main()
{
    //Encapsulation Usage
    Voter v1;
    v1.setAge(21);
    cout<<"Your Age "<<v1.getAge()<<" is Eligible to Vote.";
    return 0;
}
        

    

    
