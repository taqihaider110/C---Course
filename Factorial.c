#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number to find its factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The Factorial of this %d number is %d",n,fact);
}