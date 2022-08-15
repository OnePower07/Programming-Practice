#include<iostream>
using namespace std;
int main()
{
    int i,key,a=0;
    int A[9]={2,7,5,9,8,12,45,25,23};
    cout<<"Enter key: "<<endl;
    cin>>key;
    for(i=0;i<9;i++)
    {
        if(key==A[i])
        {
            cout<<i<<" ";
            a=1;
        }
    }
    if(a==0){
    cout<<"Not found"<<endl;
    }
}