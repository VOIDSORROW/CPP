#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter an Input number: "<<endl;
    cin>>a;
    
    if(a == 0)
    {
        cout<<"Entered number is neither even nor odd."<<endl;
    }
    else if(a%2 == 0)
    {
        cout<<"Entered number is even."<<endl;
    }
    else
    {
        cout<<"Entered number is odd."<<endl;
    }

    return 0;
    
}