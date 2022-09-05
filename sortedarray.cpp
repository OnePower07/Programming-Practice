#include<iostream>
using namespace std;
int main()
{
    int A[5]={0,1,0,1,2},a=0,b=0,c=0;
    int arr[5];
    int i=0;
    int j=0;
    for(int i=0;i<5;i++)
    {
        if(A[i]==0)
        a=0;
    }
    for(int i=0;i<5;i++)
    {
        if(A[i]==1)
        b=1;
    }
    for(int i=0;i<5;i++)
    {
        if(A[i]==2)
        c=2;
    }
    for(int i=0;i<5;i++)
    {
        if(A[i]==a)
        {
            arr[j++]=A[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(A[i]==b)
        {
            arr[j++]=A[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(A[i]==c)
        {
            arr[j++]=A[i];
        }
    }
    for(int i=0,j=0;i<5 && j<5;i++,j++)
    {
        A[i]=arr[j];
    }
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0; 
}