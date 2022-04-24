#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[25];
    cin.getline(arr,25);
    ofstream fkngfile("xxx.txt");
    fkngfile<<arr;
    fkngfile.close();
}