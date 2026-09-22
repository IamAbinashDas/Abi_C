#include<stdio.h>
int main(){
    // print numbers from 1 to 100 
   /* int i;
    for(i=1;i<100;i++){
        printf("%d\n",i);
    }*/


    // print even and odd number separately
    /*int n,i,j;
    printf("Enter limits:");
    scanf("%d",&n);

    printf("Even numbers:\n");
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf("%d\n",i);

    }

    printf("\nOdd numbers:\n");
    for(j=1;j<=n;j++){
        if(j%2!=0)
        printf("%d\n",j);

    }*/

    //whether a number is positive ,negative or zero
   /* int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num > 0){
        printf("number is positive:\n");
    }else if(num < 0){
        printf("number is negative:\n");
    }
    else{
        printf("number is zero:\n");
    }*/

    //Largest among 3 number

    int x,y,z;
    
    printf("enter x:");
    scanf("%d",&x);

    printf("enter y:");
    scanf("%d",&y);

    printf("enter z:");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("x is largest:");
    }
    else if(y>z && y>x){
        printf("y is largest:");
    }
    else printf("z is largest:");

    return 0;

}

