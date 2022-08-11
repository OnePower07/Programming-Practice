#include<iostream>
using namespace std;
int main()
{
    int l=0,h=8,mid,key,a=0;
    int A[9]={2,5,1,8,9,12,42,422,122};
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
    {
        cout<<"Elements found at: "<<mid<<endl;
        a=1;
        break;
    }
    else if(key<A[mid])
    {
        h=mid-1;
    }
    else
    {
        l=mid+1;
    }
    }
    if(a==0)
    {
        cout<<"NOT found";
    }
}