#include<iostream>
using namespace std;
int main()
{
    int i,n, fact=1;
    int *p;
    p=&fact;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        *p=*p*i;
    }
    cout<<*p;
    return 0;
}