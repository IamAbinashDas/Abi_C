#include<stdio.h>
//fuunction to print n term of fibonacci series(0,1,2,3,5,8,13,....)ie fib(n)=fib(n-1)+fib(n-2)
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib of %d is %d\n",n,fibN);
    return fibN;
}
int main(){
    int n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}