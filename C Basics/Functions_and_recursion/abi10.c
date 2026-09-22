#include<stdio.h>
//sum of digits of a num
int sum(int n){
    int sum=0,digit;
    while(n>0)
    {
        digit =n%10;
        sum=sum+digit;
        n=n/10;}
        return sum;
    
}
int main(){
    int num ;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("The sum of digits of %d=%d\n",num,sum(num));
    return 0;
}