//Function Overloading
#include<iostream>
using namespace std;
class student{
    public:
    void marks(int a){
        cout<<"The marks score by the student is "<<a<<endl;
    }
    void marks(double b){
        cout<<"The marks score by the student is "<<b<<endl;
    }
    void marks(){
        cout<<"none ";
    }
};
int main(){
    student s1;
    s1.marks(586);
    s1.marks(215.21);
    s1.marks();
    return 0;
}