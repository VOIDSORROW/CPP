#include<iostream>
using namespace std;
int main()
{
    int numerator,denominator,result;
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)
        throw denominator;
        result=numerator/denominator;
    }
    catch(int exception)
    {
        cout<<"denominator of zero is not valid"<<endl;
    }
    cout<<result<<endl;
}