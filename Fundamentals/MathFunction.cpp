#include <iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    //Rounding Comparisons: 
    float number1,number2; 
    cout<<"Enter a Negative Value: "; 
    cin>>number1; 
    cout<<"Enter a Positive Value: "; 
    cin>>number2; 
     
    cout<<"Comparisons of Negative Value:\n"; 
    cout<<"Ceiling Of Value: "<<ceil(number1)<<"\n"; 
    cout<<"Floor Of Value: "<<floor(number1)<<"\n"; 
    cout<<"Round Of Value: "<<round(number1)<<"\n"; 
    cout<<"------------------------------\n"; 
    cout<<"Comparisons of Positive Value:\n"; 
    cout<<"Ceiling Of Value: "<<ceil(number2)<<"\n"; 
    cout<<"Floor Of Value: "<<floor(number2)<<"\n"; 
    cout<<"Round Of Value: "<<round(number2)<<"\n"; 
     
    return 0; 
}