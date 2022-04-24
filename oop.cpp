#include<iostream>
#include<string>
using namespace std;
class naruto{
    private:
        string charecter;
        int shadowclone;
    public:
        void setdata(string cname,int num)
        {
            cout<<"Enter the cname and no of clone that the char can make."<<endl;
            charecter=cname;
            shadowclone=num;
        }
        void displaydata()
        {
            cout<<charecter<<endl;
            cout<<shadowclone<<endl;
        }
};
int main(){
    naruto char1,char2;
    cout<<"Program for oop includes access specifiers."<<endl;
    char1.setdata("Naruto",10);
    char1.displaydata();
    cout<<endl;
    cout<<endl;
    char2.setdata("sasuke",5);
    char2.displaydata();
}