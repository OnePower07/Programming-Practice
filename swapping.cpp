#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping: "<<a<<" "<<b;
}