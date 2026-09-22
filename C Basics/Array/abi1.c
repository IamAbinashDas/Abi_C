#include<stdio.h>
// price of 3 item with gst ie final cost
int main(){
    float price[3];
    printf("Enter 3 price:\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("TOTAL PRICE 1:%f\n",price[0] + (0.18*price[0]));
    printf("TOTAL PRICE 1:%f\n",price[1] + (0.18*price[1]));
    printf("TOTAL PRICE 1:%f\n",price[2] + (0.18*price[2]));
    return 0;
}