#include<iostream>
int glo=6;//Global variable
using namespace std;
void sum(){
    cout<< glo;
}
int main(){
    // int a=6;
    // float b=83.5;
    int glo=75;//Local variable has precedence over global variable
    cout<<glo;
    bool is_true=true;
    cout<<"The Boolean is"<<is_true;
    sum();
    // char c='a'; //In char only one character can be fit.
    // cout<<"The value of a is "<<a<<".\nThe Value of b is "<<b;
    // cout<<"\nThe value of c is "<<c;
    return 0;
}