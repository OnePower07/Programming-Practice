#include<iostream>
using namespace std;

int main()
{
  string s="i am a good boy";
  int i=0;
  for(i=0;s[i]!='\0';i++)
  {
    if(i==0)
    {
      if((s[i]>='a' && s[i]<='z'))
      s[i]=s[i]-32;
      continue;
    }
    if(s[i]==' ')
    {
      ++i;
      if(s[i]>='a' && s[i]<='z')
      {
      s[i]=s[i]-32;
      }
    }
    else
    {
      if(s[i]>='A' && s[i]<='Z')
      s[i]=s[i]+32;
    }
  }
  cout<<s;
  return 0;
}