#include<stdio.h>
//reverse an array
void reverse_array(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int first_val=arr[i];
        int sec_val=arr[n-i-1];
        arr[i]=sec_val;
        arr[n-i-1]=first_val;
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4,5,};
    reverse_array(arr,5);
    print_array(arr,5);
    return 0;
}