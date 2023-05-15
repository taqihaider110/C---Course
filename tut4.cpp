#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Operators in C++"<<endl;//'endl' or '\n' is also use for new line
    cout<<"Following are the types of Operators in C++"<<endl;
    //Arithmetic Operator
    cout<<"The Value of a+b is "<<a+b<<endl;
    cout<<"The Value of a-b is "<<a-b<<endl;
    cout<<"The Value of a*b is "<<a*b<<endl;
    cout<<"The Value of a/b is "<<a/b<<endl;
    cout<<"The Value of a%b is "<<a%b<<endl;
    cout<<"The Value of a++ is "<<a++<<endl;//Post increment
    cout<<"The Value of a-- is "<<a--<<endl;//Post increment
    cout<<"The Value of ++a is "<<++a<<endl;//Pre increment
    cout<<"The Value of --a is "<<--a<<endl;//Pre increment
    //Assignment  Operator used to assign the value to variables  
    // int c=3,d=4;
    // char d="a";

    //Comparision Operator
    cout<<"Following are the types of comparision operator in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;

    //Logical Operator
    cout<<"The value this logical and operator ((a==b)) && ((a<b))is : "<<((a==b) && (a<b))<<endl;
    cout<<"The value this logical or operator ((a==b)) || ((a<b))is : "<<((a==b) ||(a<b))<<endl;
    cout<<"The value this logical not operator !(a==b) is : "<<!(a==b)<<endl;
}