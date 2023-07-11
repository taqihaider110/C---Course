// Write a program to print the volume of a box by creating a class named 'Volume' 
// with an initialization list to initialize its length, breadth and height. 
// (just to make you familiar with initialization lists)
#include<iostream>
using namespace std;
class Volume{
    double Length,Breadth,Height;
    public:
    Volume(double L,double B,double H):Length(L),Breadth(B),Height(H){}
    double VolumeOfBox(){
        return Length*Breadth*Height;
    }
};
int main(){
    double Length,Breadth,Height;
    cout<<"Enter the Length:";
    cin>>Length;
    // cout<<endl;
    cout<<"Enter the Height:";
    cin>>Height;
    // cout<<endl;
    cout<<"Enter the Breadth:";
    cin>>Breadth;
    // cout<<endl;
    Volume V1(Length,Breadth,Height);
    cout<<"The volume of Box is:"<<V1.VolumeOfBox()<<endl;
}
