#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* InsertBST(Node *root, int val){
    if(root==NULL ){
        return new Node(val);
    }
    if( val < root->data){
        root->left=InsertBST(root->left,val);
    }
    else{
        root->right=InsertBST(root->right,val);
    }
    return root;
}
void In_Order(Node *root){
    if(root==NULL){
        return ;
    }
    In_Order(root->left);
    cout<<root->data<<" ";
    In_Order(root->right);

}
int main(){
    Node *root=NULL;
    root=InsertBST(root,5);
    InsertBST(root,1);
    InsertBST(root,3);
    InsertBST(root,8);
    InsertBST(root,9);
    InsertBST(root,11);
    InsertBST(root,16);
    In_Order(root);
    cout<<endl;
}
