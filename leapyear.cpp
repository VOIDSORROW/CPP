// #include<iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cin>>year;
//     if(year%4==0)
//     {
//         if(year%100==0)
//         {
//             if(year%400==0)
//             {
//                 cout<<year<<" is leap year"<<endl;
//             }
//             else
//                 cout<<year<<" is a leap year"<<endl;
//         }
//         else
//             cout<<year<<" is leap year"<<endl;
//     }
//     else
//         cout<<year<<" is not a leap year"<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year%4==0)
    {
        if(year%100 && year%400==0)
        {
            cout<<year<<" is a leap year"<<endl;
        }
        else
            cout<<year<<" is a leap year"<<endl;
    }
    else
        cout<<year<<" is not a leap year"<<endl;

    return 0;
}