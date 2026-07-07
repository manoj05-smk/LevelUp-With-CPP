#include <iostream>
using namespace std;
void primerange(int l,int h)
{
    for(int i=l;i<=h;i++)
    {
        if(i<2)
        {
            continue;//Base check
        }
        bool isPrime=true;
        for(int j=2;j*j <= i;j++)
        {
            if(i%j == 0)
            {
               isPrime=false;
               break;
            }
        }
        if(isPrime)
        {
            cout<<i<<'\t';
        }
    }

}
int main()
{
    //Find Prime Numbers Between Given Range
    int low,high;
    cout<<"Enter Lowest Range: ";
    cin>>low;
    cout<<"Enter Highest Range: ";
    cin>>high;
    cout<<"Prime Numbers between "<<low<<" & "<<high<<'\n';
    primerange(low,high);
    return 0;
}