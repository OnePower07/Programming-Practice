#include<iostream>
using namespace std;

int main()
{
    int A[5]={0,1,2,0,2},temp;
    int i=0;
    int j=4;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++){
        if(A[j]>A[i])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0; 
}