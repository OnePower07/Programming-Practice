#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<endl;
            sum=sum+i;
        }
    }
    cout<<sum;
}