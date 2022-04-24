// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3];
//     arr[0]=1;
//     arr[1]=2;
//     arr[2]=3;
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     char arr1[8];
//     for(int i=0;i<5;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" "<<endl;
//     }
//     for(int i=0;i<8;i++)
//     {
//         cin>>arr1[i];
//     }
//     for(int i=0;i<8;i++)
//     {
//         cout<<arr1[i]<<endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],add[3],sub[3],mult[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    cout<<"Addition operstions "<<endl;
    for(int i=0;i<3;i++)
    {
        add[i]=a[i]+b[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<add[i]<<" ";
    }
    cout<<"Subtraction operstions "<<endl;
    for(int i=0;i<3;i++)
    {
        sub[i]=a[i]-b[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<sub[i]<<" ";
    }
    cout<<"Multiplication operstions "<<endl;
    for(int i=0;i<3;i++)
    {
        mult[i]=a[i]*b[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<mult[i]<<" ";
    }
    return 0;
}