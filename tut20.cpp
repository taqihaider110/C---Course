//Abstraction
#include<iostream>
using namespace std;
class abstractstudent{
    virtual void scholarship()=0;
};
class student: abstractstudent{
    public:
        string name;
        int marks;
        string course;
        void scholarship(){
            if(marks>70){
                cout<<"Scholarship is given "<<name<<endl;
            }
            else{
                cout<<"deny";
            }
        }
};
int main(){
    student s1;
    s1.name="Taqi";
    s1.marks=75;
    s1.course="PF";
    s1.scholarship();
    return 0;
}