#include <iostream>
using namespace std;
bool isSame(int arr1[][3],int arr2[][3],int rows)
{
   
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //To Check if Two Matrices are Identical
    int arr1[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
     int arr2[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int rows=sizeof(arr1)/sizeof(arr1[0]);
     cout<<"Two Matrixes are "<<(isSame(arr1,arr2,rows) ? "Same...":"Not Same...");
}