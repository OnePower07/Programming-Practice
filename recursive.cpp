#include<iostream>
using namespace std;

void recurse(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    recurse(n-1);
  }
}
int main()
{
  int x=5;
  recurse(x);
  return 0;
}