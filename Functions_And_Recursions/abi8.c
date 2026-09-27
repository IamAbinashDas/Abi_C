#include<stdio.h>
//function to convert celcius to fahernhite ,far=celcius*(9.0/5.0)+32
float converttemp(float celcius){
    float far=celcius*(9.0/5.0)+32;
    printf("%f\n",far);
    return far;
}
int main(){
    float celcius;
    printf("Enter the degree of celcius\n");
    scanf("%f",&celcius);
    converttemp(celcius);

    return 0;
}