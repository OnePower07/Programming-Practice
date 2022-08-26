#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,24,32,3};
    int i,key;
    cin>>key;
    for(i=0;i<5;i++)
    {
        if(key==A[i])
        {
            cout<<"Element found at: "<<i;
        }
    }
}