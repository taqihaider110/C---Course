#include<iostream>
using namespace std;
class employee
{
private:
    int Id;
    static int count;
public:
    void setdata(void){
            cout<<"Enter the Id"<<endl;
            cin>>Id;
            count++;
    }
    void getdata(void){
        cout<<"The Id of the employee is "<<Id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee::count;//Default value is 0
int main(){
    employee taqi,wasi,asad,abbas;
    taqi.setdata();
    taqi.getdata();
    employee::getcount();
    wasi.setdata();
    wasi.getdata();
    employee::getcount();
    asad.setdata();
    asad.getdata();
    employee::getcount();
    abbas.setdata();
    abbas.getdata();
    employee::getcount();
    return 0;
}