#include<iostream>
using namespace std;
typedef struct details
{
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    // struct details taqi;
    // ep hussain;
    // hussain.eId=25;
    // hussain.favChar='H';
    // hussain.salary=1350000;
    // taqi.eId=1;
    // taqi.favChar='T';
    // taqi.salary=1250000;
    // cout<<"The value is "<<taqi.eId<<endl;
    // cout<<"The value is "<<taqi.favChar<<endl;
    // cout<<"The value is "<<taqi.salary<<endl;
    // cout<<"The value is "<<hussain.eId<<endl;
    // cout<<"The value is "<<hussain.favChar<<endl;
    // cout<<"The value is "<<hussain.salary<<endl;
    union money m1;
    m1.rice=25;
    m1.car='c';
    cout<<"The value is "<<m1.car<<endl;
    // enum Meal{breakfast,lunch,dinner}
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}