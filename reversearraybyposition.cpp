#include<iostream>
using namespace std;
int main()
{
    int ARR[5]={1,5,3,2,4};
    int i,j,temp=0;
    i=3;
    j=4;
    while(i<j)
    {
        temp=ARR[i];
        ARR[i]=ARR[j];
        ARR[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<5;i++)
    {
        cout<<ARR[i]<<" ";
    }
}