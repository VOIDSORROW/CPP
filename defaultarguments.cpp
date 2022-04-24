#include<iostream>
using namespace std;

int sum(int a,int b, int c=3)
{
    return(a+b+c);
}

int main()
{
    cout<<sum(1,2)<<endl;
    return 0;
}