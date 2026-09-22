#include<stdio.h>
//create a numbers array and print how many time does it repeat
int main(){
    int n,x,count=0;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count ++;
        }
    }
    printf("Number %d occurs %d times\n",x,count);
    return 0;
}