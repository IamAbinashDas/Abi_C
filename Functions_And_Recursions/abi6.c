#include<stdio.h>
//calc  area of a circle,square,rectangle 
float circlearea(float rad){
 printf("Area is:%f\n",3.14*rad*rad);
    return 3.14*rad*rad;
}

float squarearea(float side){
    printf("Area is:%f\n",side*side);
    return side*side;
}  

float rectanglearea(float a,float b){
    printf("Area is:%f\n",a*b);
    return a*b;
}

int main(){
    float rad;
    float side;
    float a,b;
    printf("Enter the radius of a circle:");
    scanf("%f",&rad);
    circlearea(rad);

    printf("Enter the side of a square:");
    scanf("%f",&side);  
    squarearea(side);

    printf("Enter the length and breath of a rectangle:");
    scanf("%f%f",&a,&b);
    rectanglearea(a,b);
    return 0;
}
