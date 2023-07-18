// Write a c++ class called 'student' with
// Data members:
// name(char type),
// marks1,marks2 (integer type)
// The program asks the user to enter name and marks.
//  Then calc_media() calculates the media note and disp() display name and
//   total media mark on screen in different lines.
#include<iostream>
using namespace std;
class student{
    public:
    char name;
    int mark1,mark2;
    student(){}
    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Marks 1 & and Marks 2: ";
        cin>>mark1>>mark2;
    }
    int calc_media(){
        int total=mark1+mark2;
        float media=total/2.0;
        cout<<"Media: "<<media<<endl;
    }
    void display(){
        cout<<"Student name is: "<<name<<" "<<calc_media()<<endl;
    }

};
int main(){
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}