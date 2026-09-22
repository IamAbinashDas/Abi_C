#include<stdio.h>
/*calculate sum,product & average of two num 
print thet avg in main function*/
void func(int a,int b, int *sum,int *product,int *average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
}
int main(){
    int a=3,b=5;
    int sum,prod,avg;
    func(a,b,&sum,&prod,&avg);
    printf("sum=%d\n,prod=%d\n,avg=%d\n",sum,prod,avg);
    return 0;
}