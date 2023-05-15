#include<iostream>
using namespace std;
class student{
    // private: It Can't be access outside the class
    //     int mark2;
    //         cout<<"The marks scored is "<<marks2<<endl;
    public:
        int marks1;
        void marks(){
            cout<<"The marks scored is "<<marks1<<endl;
        }
};
int main(){
    student s1,s2;
    s1.marks1=97;
    s1.marks();
    // s2.marks2=95;Can't access outside the class because it is private
    // s2.marks(); 
    return 0;
}