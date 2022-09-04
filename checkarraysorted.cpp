#include<iostream>
using namespace std;

int main()
{
  int A[4]={1,2,3,15};
  int a=0;
  for(int i=1;i<4;i++)
  {
    if(A[i-1]<A[i])
    {
      a=1;
    }
    else
    a=0;
  }
  if(a==0)
  {
    cout<<"Array is not sorted"<<endl;
  }
  else
  {
    cout<<"Array is sorted";
  }
  return 0;
} 