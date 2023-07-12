// Write a program that would print the information (name, year of joining, salary, address)
//  of three employees by creating a class named 'Employee'. The output should be as follows:
// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat
#include<iostream>
using namespace std;
static int count=1;
class Employee{
    string name,yearofjoining,address;
    double salary;
    public:
    Employee():name(""),yearofjoining(""),salary(0.0),address(""){
        cout<<"Enter Data for user:"<<count<<endl;
        cout<<"Enter Name:";
        getline(cin>>ws,name);
        cout<<"Enter Year of Joining:";
        getline(cin>>ws,yearofjoining);
        cout<<"Enter Salary :";
        cin>>salary;
        cout<<"Enter Address :";
        getline(cin>>ws,address);
        count++;
    }
    // Employee(string n,string y,double s,string add):name(n),yearofjoining(y),salary(s),address(add){
    //     cout<<"Enter Name:";
    //     cin>>name;
    //     cout<<"Enter Year of Joining:";
    //     cin>>yearofjoining;
    //     cout<<"Enter Salary :";
    //     cin>>salary;
    //     cout<<"Enter Address :";
    //     cin>>address;
    // }
    void display(){
        // cout<<"The Name of Employee is :"<<name<<"\t\t";
        cout<<name<<"\t\t";
        // cout<<"The Year of Joining of Employee is :"<<yearofjoining<<"\t\t";
        cout<<yearofjoining<<"\t\t\t";
        // cout<<"The Salary of Employee is :"<<salary<<"\t\t";
        cout<<salary<<"\t\t\t";
        // cout<<"The Address of Employee is :"<<address<<"\t\t";
        cout<<address<<"\t\t";
        cout<<endl;
    }
};  
int main(){
    Employee e1,e2,e3;
    cout<<"Name\t\t"<<"Year of joining\t\t"<<"Salary\t\t"<<"Address\t\t"<<endl;
    // Employee e1("Taqi","2026",185000,"D-14,Ancholi");
    e1.display();
    // Employee e2("Rehan","2026",250000,"Chappal Garden");
    e2.display();
    // Employee e3("Murti","2026",200000,"North Nazimabad");
    e3.display();
    return 0;
}