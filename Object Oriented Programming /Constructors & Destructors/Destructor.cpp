#include <iostream>
using namespace std;
class Sample
{
    public:
        Sample()
        {
            cout<<"Constructor Called...\n";
        }

        ~Sample()
        {
            cout<<"Destructor Called...\n";
        }
};
int main()
{
    //Constructor Creation and Destruction
    Sample s1;
    return 0;
}