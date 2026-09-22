#include<stdio.h>
#include<math.h>
//function to find square root of a number 
float sqroot(int num){
    return sqrt(num);
}
int main(){
    float n;
    printf("Enter a number:\n");
    scanf("%f",&n);
    printf("square root of %f is %f\n",n,sqrt(n));
    return 0;
}