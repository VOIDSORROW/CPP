#include<iostream>
using namespace std;

inline int sum(int a,int b)
{
    return(a+b);
}
inline int sub(int a,int b)
{
    return(a-b);
}
inline int mult(int a,int b)
{
    return(a*b);
}
inline int divid(int a,int b)
{
    return(a/b);
}

int main()
{
    int a,b;
    char o;
    cout<<"Enter any two integer values:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator that you want to perform the operation:"<<endl;
    cin>>o;
    if(o == '+')
    {
        cout<<a<<"+"<<b<<"="<<sum(a,b)<<endl;
    }
    else if(o == '-')
    {
        cout<<a<<"-"<<b<<"="<<sub(a,b)<<endl;
    }
    else if(o == '*')
    {
        cout<<a<<"*"<<b<<"="<<mult(a,b)<<endl;
    }
    else if(o == '/')
    {
        cout<<a<<"/"<<b<<"="<<divid(a,b)<<endl;
    }
    else
    {
        cout<<"The entered operator is not valid or the iputed numbers are not of integer type."<<endl;
    }
    return 0;
}