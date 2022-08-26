#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=n;j>=n+1-i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}