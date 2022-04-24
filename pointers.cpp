#include<iostream>
using namespace std;
int main()
{
    int value;
    cin>>value;
    int *ptr;
    ptr=&value;
    cout<<"The entered value is stored in the ptr: "<<*ptr<<endl;
    cout<<"The address of entered value stored in the pointer is: "<<ptr<<endl;
    *ptr=4;
    cout<<"The entered value is stored in the ptr: "<<*ptr<<endl;
    cout<<"The address of entered value stored in the pointer is: "<<ptr<<endl;
}