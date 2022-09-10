#include<iostream> 
using namespace std; 
bool prime(int x)
{
  for(int i=2;i<x;i++)
  {
    if(x%i==0)
    {
      return false;
    }
  }
  return true;
}
int main() 
{ 
  int m=30;
  int n=40;
  for(int i=m; i<=n; i++)
  {
    if(prime(i))
      cout<<i<<endl;
  }
}