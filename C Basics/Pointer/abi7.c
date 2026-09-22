#include<stdio.h>
//maximum num between two number 
int main(){
    int a,b;
    int *p,*q;
    printf("Enter two num:\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p > *q){
        printf("maximum:%d\n",*p);
    }else{
        printf("minimum:%d\n",*q);
    }
    return 0;
}