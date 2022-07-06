#include<iostream>
using namespace std;
class add
{
    private:
    int a;
    public:
    void getvalue()
    {
        cin>>a;
    }
    add operator+(add ob)
    {
        add t;
        t.a=a + ob.a;
        return t;
    }
    int display()
    {
        return a;
    }
};
int main()
{
    
    add x, y, sum;
    cout<<"Enter value 1: ";
    x.getvalue();
    cout<<"Enter value 2: ";
    y.getvalue();
    sum= x+y;
    cout<<"Addition result is: "<<sum.display()<<endl;
}
