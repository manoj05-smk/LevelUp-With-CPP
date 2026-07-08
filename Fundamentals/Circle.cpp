#include <iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    //Circle Properties 
    const double PI=3.14159; 
    double radius; 
    cout<<"Enter a Radius of Circle: "; 
    cin>>radius; 
    double diameter=2*radius; 
    double circumference=2*PI*radius; 
    double area=PI*pow(radius,2); 
    cout<<"Circle Properties: "<<endl; 
    cout<<"Diameter: "<<diameter<<"\n"; 
    cout<<"Circumference: "<<circumference<<"\n"; 
    cout<<"Area: "<<area<<"\n"; 
 
    return 0; 
} 