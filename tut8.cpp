#include<iostream>
using namespace std;
int main(){
    int i;
    //Example of Break statement
    // for (i = 0; i <40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    //Example of Break statement
    for (i = 0; i <40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}