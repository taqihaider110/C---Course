// Question: Design a C++ class called Student with properties for name, roll number, and marks.
//  Implement constructors to initialize these properties and a destructor to display a 
//  farewell message when an object is destroyed.
#include<iostream>
using namespace std;
class Student{
    private :
    string name;
    int rno;
    string marks;
    public:
    Student():name(""),rno(0),marks(""){}
    Student(string nm,int rn,string mk):name(nm),rno(rn),marks(mk){}
    void set_data(string name,int rollno, string marks){
        this->name=name;
        this->rno =rollno ;
        this->marks=marks;
    }
    void get_data(){
        cout<<"The Name of Student: "<<name<<endl<<" Roll Number : "<<rno<<endl<<" Marks Obtained: "<<marks<<endl;
    }
    ~Student(){
        cout<<"Good Bye "<<this->name<<endl;
    }
};
int main(){
    Student s1("Taqi_Haider",22092,"125");
    Student s2("Faris_Ali",22096,"135");
    
    s1.get_data();
    s2.get_data();
    return 0;
}