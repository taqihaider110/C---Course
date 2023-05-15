//Inheritance
#include<iostream>
using namespace std;
class student{
    public:
    int marks=96;//Example of single inheritance
};
class taqi: public student{
    public:
    int marksdetected=5;
};
int main(){
    taqi t1;
    cout<<"The marks obtained by taqi is "<<t1.marks<<endl;
    cout<<"The marks detected by taqi is "<<t1.marksdetected<<endl;
    return 0;
}