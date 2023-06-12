#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){}
    Number(int x){
        a=x;
    }
    Number(Number &obj){
        //When no copy constructor is found ,compiler supplies its own copy constructor
        cout<<"Copy Constructor calleD:"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The Enter Value of X is :"<<a<<endl;
    }
};
int main(){
    Number n1(5);
    n1.display();
    Number n2(n1);
    n2.display();
    return 0;
}