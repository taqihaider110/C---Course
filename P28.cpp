#include <iostream>
using namespace std;
class Students
{
private:
    string name;
    const int rollno;
    float cgpa;

public:
    Students(int rno) : rollno(rno) {}
    void set(string sname, float cg)
    {
        name = sname;
        cgpa = cg;
    }
    void print()
    {
        cout << "Name: " << name << ", Roll #" << rollno << ", CGPA, " << cgpa << endl;
    }
};
int main()
{
    Students s(12);
    s.set("Ahmad", 3.67);
    s.print();
}