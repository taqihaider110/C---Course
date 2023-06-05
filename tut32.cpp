#include<iostream>
using namespace std;
class Bankaccount{
    int principal,year;
    double InterestRate;
    double return_value;
    public:
    Bankaccount(){}
    Bankaccount(int p,int y,double r);
    Bankaccount(int p,int y,int r);
    void show();
};
void Bankaccount::show(){
        cout<<"Principal  amount was "<<principal<<" . Return value after "<<year<<" years is "<<return_value<<endl;
}
Bankaccount::Bankaccount(int p,int y,double r){
    principal=p;
    year=y;
    InterestRate=r;
    return_value=principal;
    for (int i = 0; i < y; i++)
    {
        return_value=return_value * (1+InterestRate);
    }
}
Bankaccount::Bankaccount(int p,int y,int r){
    principal=p;
    year=y;
    InterestRate=double(r)/100;
    return_value=principal;
    for (int i = 0; i < y; i++)
    {
        return_value=return_value * (1+InterestRate);
    }
}
int main(){
Bankaccount b1,b2(1000,1,0.04),b3(1000,1,4);
b1.show();
b2.show();
b3.show();
    return 0;
}