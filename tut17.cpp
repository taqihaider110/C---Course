#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
    string course;
     void Introduce(){
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The id of the student is "<<id<<endl;
        cout<<"The course of the student is "<<course<<endl;
     }
    student(string n,int i,string c){
        name=n;
        id=i;
        course=c;
    }
};
int main(){
    //By this we can easily access the class in short step
    student s1=student("Taqi",92,"OOP");
    s1.Introduce();
    student s2=student("Murtaza",93,"DS");
    s2.Introduce();
    student s3=student("Faris",96,"HS");
    s3.Introduce();
    //Below it is long method we have to assign in individual separately 
    // s1.name="Taqi";
    // s1.id=92;
    // s1.course="OOP";
    // s1.Introduce();
    // student s2;
    // s2.name="Murtaza";
    // s2.id=93;
    // s2.course="DS";
    // s2.Introduce();
    // student s1;
    // s3.name="Faris";
    // s3.id=96;
    // s3.course="Hs";
    // s3.Introduce();
    return 0;
}