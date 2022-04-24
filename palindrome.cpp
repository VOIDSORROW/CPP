#include<iostream>
using namespace std;
int main()
{
    int num,lastdigit,n,rev=0;
    cin>>num;
    n=num;
    while(num!=0)
    {
        lastdigit=num%10;
        rev=(rev*10)+lastdigit;
        num=num/10;
        
    }
    if(n==rev)
    {
        cout<<"Palidrome"<<endl;
    }
    else
        cout<<"Not a Palindrome"<<endl;
    return 0;
}