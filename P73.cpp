#include<iostream>
using namespace std;
int main()
{
    int col=4,row=5;
    // cout<<"Enter row, column respectively:";
    // cin>>col>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || i==row || j==0 || j==col){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}