#include<iostream>
using namespace std;
int main()
{
    long long int n,sum=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    cout<<sum;
}