#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int *ptr;
    ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }

}