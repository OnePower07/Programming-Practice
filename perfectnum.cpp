#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<endl;
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    if(sum==2*n)
    {
        cout<<"Perfect number"<<endl;
    }
    else
    cout<<"Not a perfect number";
}