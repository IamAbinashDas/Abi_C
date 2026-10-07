#include<stdio.h>
#include<math.h>
//PRINT AGE
int main(){
    int age;
    printf("Enter your's age:");
    scanf("%d",&age);
    int *ptr=&age;
    printf("Age is:%d\n",*ptr);
    return 0;
}