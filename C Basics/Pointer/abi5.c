#include<stdio.h>
//swap two numbers
void swap(int a,int b){
int x;
x=b;
b=a;
a=x;
printf("a=%d & b=%d is:\n",a,b);
}
void _swap(int *a,int *b){
int x;
x=*b;
*b=*a;
*a=x;
printf("a=%d & b=%d is:\n",*a,*b);
}
int main(){
    int x=3,y=5;
    swap(x,y);
    _swap(&x,&y);
    printf("x=%d & y=%d is:\n",x,y);
    return 0;
}