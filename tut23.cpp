//Run time polymorphism
#include<iostream>
using namespace std;
class student{
    public:
    virtual void intro(){//The virtual execute the sub class same function
        cout<<"The result of the student is intro "<<endl;
    }
    void display(){
        cout<<"The result of the student is display "<<endl;
    }
};
class taqi:public student{
    public:
    void intro(){
        cout<<"The result of the taqi is intro "<<endl;
    }
    void display(){
        cout<<"The result of the taqi is display "<<endl;
    }
};
int main(){
    student *s1;
    taqi t;
    s1=&t;
    s1->intro();
    s1->display();
    return 0;
}