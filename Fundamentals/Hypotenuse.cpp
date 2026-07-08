#include <iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    //Hypotenuse Calculator 
    int adjacent,opposite; 
    cout<<"Enter a Adjacent Side (in cm): "; 
    cin>>adjacent; 
    cout<<"Enter a Opposite Side (in cm): "; 
    cin>>opposite; 
     
    int hypotenuse=pow(adjacent,2)+pow(opposite,2); 
     
    cout<<"Hypotenuse of the Triangle is "<<sqrt(hypotenuse)<<" cm "; 
 
    return 0; 
} 