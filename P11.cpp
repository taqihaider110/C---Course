// Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
#include<iostream>
using namespace std;
class Employee{
    int salary;
    int no_of_hours;
    public:
    Employee():salary(0),no_of_hours(0){}
    void getInfo(int s,int hours){
        salary=s;
        no_of_hours=hours;
        // cout<<"Enter Salary of Employee: ";
        // cin>>salary;
        // cout<<"Enter Work hours of Employee: ";
        // cin>>no_of_hours;
    }
    int AddSal(){
        if(salary<500){
            salary+=10;
        }
        return salary;
    }
    int AddWork(){
        if(no_of_hours>6){
            salary+=5;
        }
        return salary;
    }
    void displayInfo() {
        cout << "Salary: $" << salary << endl;
        cout << "Work hours: " << no_of_hours << " hours" << endl;
    }
};
int main(){
    int count=3;
    Employee employees[count];
    int salary,hours;
    for (int i = 0; i < count; i++) {
        cout << "Enter Salary of Employee " << i + 1 << ": ";
        cin >> salary;
        cout << "Enter Work hours of Employee " << i + 1 << ": ";
        cin >> hours;
        employees[i].getInfo(salary, hours);
        employees[i].AddSal();
        employees[i].AddWork();
        // cout << endl;
    }
    cout << "Employee Salaries:\n";
    for (int i = 0; i < count; i++) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].displayInfo();
        // cout << endl;
    }
    return 0;
}