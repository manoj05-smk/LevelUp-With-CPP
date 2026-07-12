#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Book
{
    public:
        string title;
        string author;
        double price;
    
    void display()
    {
        cout<<"Book Title: "<<title<<'\n';
        cout<<"Book Author: "<<author<<'\n';
        cout<<"Book Price: RS "<<fixed<<setprecision(2)<<price<<'\n';
    }
};
int main()
{
    //Hands-On Practice with Classes & Object (For Book Class)
    Book b1;

    b1.title ="Harry Potter";
    b1.author="J.K. Rowling";
    b1.price=780.00;

    b1.display();
    return 0;
}
