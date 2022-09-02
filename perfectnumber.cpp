#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,i;
  cin>>n;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(n==sum)
  cout<<"Perfect number"<<endl;
  else
  cout<<"Not a perfect number";
}