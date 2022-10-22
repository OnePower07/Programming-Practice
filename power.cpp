#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m,n,i;
  cin>>m>>n;
  int o=1;
  while(n!= 0)   
  {
    o*=m;
    n--;
  }
  cout<<o;
}