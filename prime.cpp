#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Prime";
    }
    else
    cout<<"Not prime";
}