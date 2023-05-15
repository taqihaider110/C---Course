#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);//Default Constructor Declaration
    complex(int,int);//Parameterized Constructor Declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
// complex::complex(void){//Default constructor as it take no parameters
//     // a=10;
//     // b=20;
//     cout<<"Enter the value of a & b :"<<endl;
//     cin>>a>>b;
// }
complex::complex(int x,int y){//Parameterized constructor as it takes parameters
    a=x;
    b=y;
    cout<<"Enter the value of a & b :"<<endl;
    cin>>a>>b;
}
int main(){
    //Implicit call
    complex a(4,5);
    a.printNumber();
    //Explicit Call
    complex b=complex(11,2);
    b.printNumber();
    // complex c1;
    // c1.printNumber();
    return 0;
}