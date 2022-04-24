#include<iostream>
using namespace std;
int main()
{
    int x,fact;
    cin>>x;
    fact=x;
    while(x>1)
    {
        x--;
        fact=fact*x;
    }
    cout<<"Factorial of x"<<" is "<<fact<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,fact;
//     fact=x;
//     for(int i=x;i<=x)
// }