#include<iostream>
using namespace std;
int main()
{
    int max=0,i;
    int A[5]={3,5,5,81,777};
    for(i=0;i<=5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<max;
}