#include<stdio.h>
int main(){
    int a,num,n,rev=0;
    printf("Enter the number to find its palindrome\n");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        a=num%10;
        rev=rev*10+a; 
        num=num/10;
    }
    if(n==rev){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}