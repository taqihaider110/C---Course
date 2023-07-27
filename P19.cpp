// Using 2-D arrays, write a program that allows the user to input two, 3x3 matrices.
// Write a function for adding two matrices. Write another function for multiplying
// the two matrices.
#include<iostream>
using namespace std;
void print_matrix(int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void add_matrix(int matrix1[3][3],int matrix2[3][3],int result[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
void mult_matrix(int matrix1[3][3],int matrix2[3][3],int result[3][3]){
    for(int i=0;i<3;i++){//For rows of Matrix1
        for(int j=0;j<3;j++){//For columns of Matrix2
            result[i][j]=0;
            for(int k=0;k<3;k++){//actual dot product
                result[i][j]=result[i][j]+(matrix1[i][k]*matrix2[k][j]);
            }
        }
    }
}
int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3],product[3][3];
    cout<<"For matrix 1:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"For matrix 2:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix2[i][j];
        }
    }
    add_matrix(matrix1,matrix2,sum);
    cout<<"For SUM:"<<endl;
    print_matrix(sum);
    mult_matrix(matrix1,matrix2,product);
    cout<<"For  Multiplication:"<<endl;
    print_matrix(product);
    return 0;
}