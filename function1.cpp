// A person is eligible to vote if his/her age is greater than or equal to 18. 
//Define a function to find out if he/she is elligible to vote.
#include<bits/stdc++.h>
// using namespace std;
char* vote(int age)
{
    if (age >= 18)
    {
        return "Eligible to vote";
    }
    else
    {
        return "Not eligible";
    }
}
int main()
{
    int x;
    std::cin>>x;
    std::cout<<vote(x);
}