#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //Use of Constant
    const float d=45.6;
    cout<<"The value of d is "<<d<<endl;
    int a=45,b=3,c=1024;
    cout<<"The value of a without setw  is "<<a<<endl;
    cout<<"The value of b without setw  is "<<b<<endl;
    cout<<"The value of c without setw  is "<<c<<endl;
    cout<<"The value of a   is "<<setw(4)<<a<<endl;
    cout<<"The value of b   is "<<setw(4)<<b<<endl;
    cout<<"The value of c   is "<<setw(4)<<c<<endl;
    int xd=123,XD=12345;
    cout<<(xd+XD)+xd/XD*xd;

}