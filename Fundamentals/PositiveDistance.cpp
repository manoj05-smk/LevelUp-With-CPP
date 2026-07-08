#include <iostream> 
#include<cmath> //No Need in Modern cpp Compiler
using namespace std; 
int main() 
{ 
    //positive distance between 2 value regardless of which one is larger 
    int value1,value2; 
    cout<<"Enter a number 1: "; 
    cin>>value1; 
    cout<<"Enter a number 2: "; 
    cin>>value2; 
    int dist=value1-value2; 
     
    cout<<"Positive distance betwee "<<value1<<" and "<<value2<<" is = "<<abs(dist); 
 
    return 0; 
} 