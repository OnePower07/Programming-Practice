#include<iostream>
using namespace std;

int add(int a, int b)
{
    a++;
    b++;
    cout<<a << " "<<b<<endl;
    return a+b;
}
int main()
{
    int x=10;
    int y=12;
    cout<<add(x,y) << endl;
    cout<< x << " "<< y << endl;
}