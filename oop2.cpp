#include<iostream>
using namespace std;
class laptop{
    private:
        string company;
        int ram;
        string processor;
        string graphic_cord;
        string clockspeed;
    public:
        void setdata(string cmpname,int ram_size,string pcssr,string gc_cord,string clkspeed){
            company=cmpname;
            ram=ram_size;
            processor=pcssr;
            graphic_cord=gc_cord;
            clockspeed=clkspeed;
        }
        void displaydata()
        {
            cout<<"The enterd detalis of laptop are: "<<endl;
            cout<<"Company is "<<company<<endl;
            cout<<"RAM it has "<<ram<<endl;
            cout<<"Processor "<<processor<<endl;
            cout<<"Gaming graphic code "<<graphic_cord<<endl;
            cout<<"Clockspeed of lap is "<<clockspeed<<endl;
        }
};
int main(){
    laptop my;
    my.setdata("hp",8,"Ryzen 5","nvidia 4 GB","4 Ghz");
    my.displaydata();
}