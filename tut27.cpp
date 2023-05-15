#include<iostream>
using namespace std;
class employee
{
private:
    int Id;
    int salary;
public:
    void setId(void){
        salary =122;
        cout<<"Enter the id of employee "<<endl;
        cin>>Id;
    }
    void getId(void){
        cout<<"The value of Id is "<<Id<<endl;
    }
};
int main(){
    employee fb[4];
    for (int i = 0; i <4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
      
    return 0;
}