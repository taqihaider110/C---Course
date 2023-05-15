//Encapsulation
#include<iostream>
using namespace std;
class student{
    private:
        int marks;//The private variable can be accessed by below two
    public:
        void setmarks(int m){//By using setter method of Encapsulation
        marks=m;
        }
        int getmarks(){//By using getter method of Encapsulation
            return marks;
        } 
};
int main(){
    student s1;
    s1.setmarks(97);
    cout<<"The marks of student is "<<s1.getmarks();
    return 0;
}