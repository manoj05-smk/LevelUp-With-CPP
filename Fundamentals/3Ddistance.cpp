#include <iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    //3D Distance Calculation 
    double dim1,dim2,dim3; 
    cout<<"Enter a Dimension 1: "; 
    cin>>dim1; 
    cout<<"Enter a Dimension 2: "; 
    cin>>dim2; 
    cout<<"Enter a Dimension 3: "; 
    cin>>dim3; 
     
    double dist = pow(dim1,2)+pow(dim2,2)+pow(dim3,2); 
    cout<<"3D Space Distance: "<<sqrt(dist); 
    return 0; 
}