#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        friend complex sumcomplex(complex o1,complex o2);//Example of Friend Functions
        // void setDataBySum(complex o1,complex o2){
        //     a=o1.a+o2.a;
        //     b=o1.b+o2.b;
        // }
        void printnumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setData(1,4);
    c1.printnumber();
    c2.setData(5,8);
    c2.printnumber();
    // c3.setDataBySum(c1,c2);
    // c3.printnumber();
    sum=sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}