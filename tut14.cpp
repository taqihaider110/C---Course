#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b;
}
float moneyreceived(int currentmoney,float factor =1.04){
    return currentmoney*factor;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<"Rs in your bank account, You will receive "<<moneyreceived(money)<<"Rs after one year"<<endl;
    cout<<"For VIP:If you have "<<money<<"Rs in your bank account, You will receive "<<moneyreceived(money,1.1)<<"Rs after one year";
    return 0;
}