#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sumRealcomplex(complex,complex);
    int sumCompcomplex(complex,complex);
};
class complex
{
private:
    int a,b;
    //Individually declaring functions as friends
    // friend int calculator::sumRealcomplex(complex,complex);
    // friend int calculator::sumCompcomplex(complex,complex);
    // Aliter:Declaring the entire calculator class as friend
    friend class calculator;
public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
int calculator ::sumRealcomplex(complex o1,complex o2){
    return (o1.a+ o2.a);
}
int calculator ::sumCompcomplex(complex o1,complex o2){
    return (o1.b+ o2.b);
}
int main(){
    complex o1,o2;
    o1.setNumber(4,5);
    o2.setNumber(3,7);
    calculator calc;
    int res=calc.sumRealcomplex(o1,o2);
    cout<<"The sum of Real part of o1 and o2 "<<res<<endl;
    int resc=calc.sumCompcomplex(o1,o2);
    cout<<"The sum of Comp part of o1 and o2 "<<resc<<"i"<<endl;
    return 0;
}