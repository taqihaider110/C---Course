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
    // At first traverse left subtree then visit the root and then traverse the right subtree.
    In_Order(root->left);
    cout<<root->data<<" ";
    In_Order(root->right);
}
void Pre_Order(Node *root){
    if(root==NULL){
        return ;
    }
    // At first visit the root then traverse left subtree and then traverse the right subtree.
    cout<<root->data<<" ";
    In_Order(root->left);
    In_Order(root->right);
}
void Post_Order(Node *root){
    if(root==NULL){
        return ;
    }
    // At first traverse left subtree then traverse the right subtree and then visit the root.
    In_Order(root->left);
    In_Order(root->right);
    cout<<root->data<<" ";
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
    
    cout<<"In-Order Traversal:";
    In_Order(root);
    cout<<endl;
    
    cout<<"Pre-Order Traversal:";
    Pre_Order(root);
    cout<<endl;
    
    cout<<"Post-Order Traversal:";
    Post_Order(root);
    cout<<endl;
    
}
