#include<iostream>
using namespace std;
#define n 100
class Stack{
    private:
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return ;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(5);
    s1.push(6);
    cout<<s1.Top()<<endl;
    s1.pop();
    cout<<s1.Top()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.empty()<<endl;
}
