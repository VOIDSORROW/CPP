#include<iostream>
using namespace std;
void passbyvalue(int x,int y)
{
    int z=x;
    x=y;
    y=z;
}
void passbyreference(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
void passbyaddress(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    int a=1,b=2;
    passbyaddress(&a,&b);
    cout<<a<<b<<endl;
    return 0;
}