#include<stdio.h>
//fctrorial of a number fact(n)=n*fact(n-1)
int fact(int n){
    if(n==0){
        return 1;}
    return fact(n-1)*n;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The fact of n is:%d\n",fact(n-1)*n);
    return 0;
}