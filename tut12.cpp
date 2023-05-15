#include<iostream>
using namespace std;
//Function prototype
int sum(int a,int b);
void g(void);
int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum of two number is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(void){
    cout<<"Good Morning!";
}