#include<iostream>
using namespace std;

int main()
{
    int A[12]={1,2,4,5,2,56,22,43,44,33,67,67};
    for(int i=0;i<12;i++)
    {
        for(int j=i+1;j<12;j++)
        {
            if(A[i]==A[j])
            {
                cout<<"Duplicate element is: "<<A[i]<<endl;
            }
        }
    }
    return 0;
}