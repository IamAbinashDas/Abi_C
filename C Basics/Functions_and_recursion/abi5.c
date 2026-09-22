#include<stdio.h>
//sum of 1st n natural numbers  sum(n)=sum(n-1)+n
int sum(int n);
int main(){
    printf("Sum is:%d\n",sum(15));

    return 0;
}
int sum(int n){
    if(n==1){
    return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;

}