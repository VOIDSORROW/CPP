// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(x>y)
//     {
//         if(x>z)
//         {
//             cout<<x<<" is the greatest"<<endl;
//         }
//         else{
//             cout<<z<<" is the greatest"<<endl;
//         }
//     }
//     else if(y>x)
//     {
//         if(y>z)
//         {
//             cout<<y<<" is the greatest"<<endl;
//         }
//         else{
//             cout<<z<<" is the greatest"<<endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<x<<" is the greatest"<<endl;
    }
    else if(y>x && y>z)
    {
        cout<<y<<" is the greatest"<<endl;
    }
    else
        cout<<z<<" is the greatest"<<endl;
    return 0;
}