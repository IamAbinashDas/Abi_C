#include<stdio.h>
#include<math.h>
//power function making*
int power(int b,int e){
    int result=1;
     for(int i=1;i<=e;i++){
        result*=b;
    }
        return result;
}
int main(){
    int a,b;
    printf("Enter base:\n");
    scanf("%d",&a);
    printf("Enter exponent:\n");
    scanf("%d",&b);
    printf("%d^%d : %d\n",a,b,power(a,b));
    return 0;
}
