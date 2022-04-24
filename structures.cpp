#include<iostream>
using namespace std;
struct narutoshadowclone{
    char power[100];
    int nofclones;
};
int main()
{
    narutoshadowclone clone1,clone2;
    cout<<"DATTEBAYO"<<endl;
    cout<<"Enter the power of naruto: "<<endl;
    cin.getline(clone1.power,100);
    cout<<"Enter nofclones: "<<endl;
    cin>>clone1.nofclones;
    cout<<"Enter the power of naruto: "<<clone1.power<<endl;
    cout<<"Enter nofclones: "<<clone1.nofclones<<endl;

    cout<<endl<<"Enter the power of naruto: "<<endl;
    cin>>clone2.power;
    cout<<"Enter nofclones: "<<endl;
    cin>>clone2.nofclones;
    cout<<endl<<"Enter the power of naruto: "<<clone2.power<<endl;
    cout<<"Enter nofclones: "<<clone2.nofclones<<endl;
    return 0;
}
