#include <iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    //Boolean Flags Packer 
    int v1,v2,v3,v4; 
    cout<<"*** Constraints: Only Enter Boolean Values (0 & 1) ***\n"; 
    cout<<"Enter Value 1: "; 
    cin>>v1; 
    cout<<"Enter Value 2: "; 
    cin>>v2; 
    cout<<"Enter Value 3: "; 
    cin>>v3; 
    cout<<"Enter Value 4: "; 
    cin>>v4; 
    
    int pack=0; 
    pack=(pack<<1) | v1; 
    pack=(pack<<1) | v2; 
    pack=(pack<<1) | v3; 
    pack=(pack<<1) | v4; 
    cout<<"Final Packed Value: "<<pack; 
    return 0; 
}