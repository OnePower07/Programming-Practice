#include<iostream>
using namespace std;

string prime(int n)
{
    int x=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        x++;
    }
    if(x==2)
    {
        return "Prime";
    }
    else
    {
        return "Non prime";
    }
}

int main()
{
    int a;
    cin>>a;
    cout<<prime(a);
    return 0;
}