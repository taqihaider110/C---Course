// Assign and print the roll number, phone number and address of two students having 
// names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
#include<cstring>
using namespace std;
class Student{
    private:
    string name;
    int roll_no;
    string phone_no;
    public:
    Student(string nm,int rn,string pn):name(nm),roll_no(rn),phone_no(pn){}
    void display(){
        cout<<"The Name of student is: "<<name<<endl;
        cout<<"The Roll_no is: "<<roll_no<<endl;
        cout<<"The Phone no is: "<<phone_no<<endl;
    }
};
int main(){
    Student s1("Taqi",92,"03322959712");
    Student s2("Farhan",45,"0337589211");
    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}