#include<iostream>
using namespace std;
int main(){
    float d=34.4f;
    long double e=34.4L;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout<<"The size of 34.4 is  "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //Reference variables
    int x=455;
    int &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;  

    //Type casting
    int a=45;
    float b=45.5;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
}