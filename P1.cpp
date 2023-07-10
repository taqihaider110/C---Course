// Create a class named 'Student' with a string variable 'name' 
// and an integer variable 'roll_no'. Assign the value of roll_no as '2' 
// and that of name as "John" by creating an object of the class Student.
#include<iostream>
#include<cstring>
using namespace std;
class Student{
    private:
    string name;
    int roll_no;
    public:
    Student(string nm,int rn):name(nm),roll_no(rn){}
    void display(){
        cout<<"The name is "<<name<<endl;
        cout<<"The roll no is "<<roll_no<<endl;
    }
};
int main(){
    Student s1("John",92);
    s1.display();
    return 0;
}