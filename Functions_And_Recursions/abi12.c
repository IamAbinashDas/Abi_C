#include<stdio.h>
#include<math.h>
//hot or cold depending on temp enter by user
float checktemp(float temp){
    if(temp>30){
        printf("HOT\n");
    }else{
        printf("COLD\n");
    }
}
int main(){
    float t;
    printf("Enter temp:");
    scanf("%f",&t);
    checktemp(t);
    return 0;
}