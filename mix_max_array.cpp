#include<iostream>
using namespace std;

int main()
{
  int arr[5]={3,2,4,9,12};
  int max=arr[0];
  int min=arr[0];
  for(int i=0;i<5;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }
    else if(min>arr[i])
    {
      min=arr[i];
    }
  }
  cout<<max<<" "<<min;
  return 0;
}