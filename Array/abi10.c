#include<stdio.h>
//the largest num in an array
int main(){
    int n,i;
    printf("Enter the numbers of elements in an array:\n");
    scanf("%d\n",&n);
    int arr[n];
    printf("Enter x elements :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        
    }
    printf("Number %d times\n",largest);
    return 0;
}