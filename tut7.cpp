#include<iostream>
using namespace std;
int main(){
    // int age;//Example of Selection control structure:If-Elseif -else ladder
    // cout<<"Enter the age "<<endl;
    // cin>>age;
    // if(age<18){
    //     cout<<"you can not come to party "<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"You are kid"<<endl;
    // }
    // else{
    //     cout<<"You can come to part"<<endl;
    // }
    //Selection control structure:Switch case statement
    // switch (age)
    // {
    // case 18:
    //     cout<<"You can vote"<<endl;
    //     break;
    
    // default:
    //     cout<<"You can't vote"<<endl;
    //     break;
    // }
    // Loop Control structure:
    // Types of loop:
    // 1-For
    // 2-While
    // 3-Do while
    // Printing 1 to 40 using for loop
    int i; 
    for (i = 1; i <=40; i++)
    {
        /* code */
        cout<<i<<endl;
    }
    cout<<"---------------"<<endl;
    // example of infinite for loop
    // for (i = 0; 34 <=40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    // Printing 1 to 40 using while loop
    i=1;
    while (i<=40)
    {
        /* code */
        cout<<i<<endl;
        i++;
    }
    // example of infinite while loop
    // while (true)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     i++;
    // }
    // Printing 1 to 40 using do while loop
    i=5;
    do
    {
        /* code */
        cout<<i<<endl;
        i++;

    } while (i<=40);
    
       
}