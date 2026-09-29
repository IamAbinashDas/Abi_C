#include<stdio.h>
//Traverse in a array
int main(){
    int aadhar[10];
    int *ptr=&aadhar[10];
    for(int i=0;i<10;i++){
        printf("%d index:",i);
        scanf("%d",&aadhar[i]);
    }
    for(int i;i<10;i++){
        printf("\n%d index=%d\n",i,aadhar[i]);
    }
    return 0;
}