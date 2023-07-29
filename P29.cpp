#include<iostream>
using namespace std;
class test{
private:
int a;
public:
int nonconstFucntion(int a){
cout<<"Non Constant Function is called"<<endl;
a=a+10;
return a;
}
int constFucntion(int a) const{
return a;
}
};
main( ){
test t;
cout<<"Constant Function is called"<<endl;
cout<<t.nonconstFucntion(10)<<endl;
cout<<t.constFucntion(30);
return 0;
}
