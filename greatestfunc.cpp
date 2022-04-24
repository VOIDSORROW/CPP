#include<iostream>
using namespace std;

int maximumnum(int x,int y,int z)
{
    if(x>y && x>z){
        return x;
    if(y>x && y>z)
        return y;
    if(z>y && z>x)
        return z;
}

int main(){
    int a,b,d;//c;
    cin>>a,b,d;//c;
    //int c=maximumnum(a,b,d);
    cout<<maximumnum(a,b,d)<<endl;
    return 0;
}


// #include<iostream>
// using namespace std;
// int greatestfunc(int x,int y)
// {
//     if(x>y)
//         return x;
//     else
//         return y;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int c=greatestfunc(a,b);
//     cout<<c<<endl;
// }
