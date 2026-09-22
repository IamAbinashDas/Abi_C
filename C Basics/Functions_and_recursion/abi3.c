#include<stdio.h>
//price calculation
void calculateprice(float value);
    float value =  100.00;
    calculateprice(value);
    printf("value is :%2f\n",value);
    return 0;
}
void calculateprice(float value){
    value +=(0.18*value);
    printf("Final price is:%2f\n",value);
}
    