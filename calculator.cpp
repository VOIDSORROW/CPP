#include<iostream>
using namespace std;

int main()
{
    char op;
    float n1,n2;
    cout<<"Enter two inputs to perform an operation: \n"<<endl;
    cin>>n1>>n2;
    cout<<"Enter operator:"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
        break;

        case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
        break;

        default:
        cout<<"If the entered operator is other than +,-,/ and * then the operation cannot be done."<<endl;
    }
    return 0;
}