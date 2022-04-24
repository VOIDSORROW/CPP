#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
    cout<<"Enter the numbers than need to be swapped:"<<endl;
    cin>>x>>y;

    swap(&x,&y);

    cout<<"Swapped value of A is:"<<x<<endl;
    cout<<"Swapped value of B is:"<<y<<endl;
    return 0;
}
