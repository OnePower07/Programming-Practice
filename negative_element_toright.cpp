#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {-8,4,7,1,-2,3,-16};
    int arr2[7];
    int j=0;
    for(int i=0; i<7; i++)
    {
       if(arr[i]>0)
       {
        arr2[j++]=arr[i];
       }
    }
    for(int i=0; i<7; i++)
    {
       if(arr[i]<0)
       {
        arr2[j++]=arr[i];
       }
    }
    for(int i=0,j=0;i<7 && j<7;i++,j++)
    {
        arr[i]=arr2[j];
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}