#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int h,int key)
{
  int mid;
  while(l<=h)
  {
    mid=(l+h)/2;
    if(key==arr[mid])
    {
      return mid;
    }
    else if(key<arr[mid])
    {
      h=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
  return -1;
}
int main()
{
  int n,result;
  cin>>n;
  int A[8]={2,4,8,10,14,17,19,120};
  result=binarysearch(A,0,7,n);
  if(result ==-1)
  {
    cout<<"not Found ";
  }
  else
      cout<<"found at : "<<result;
  return 0;
}
