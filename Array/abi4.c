#include<stdio.h>
//count the no of odd numbers in an array
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<=n;i++){
        if(arr[i]%2!=0)
        count++;
    }
    return count;
}
int main() {
    int arr[]={1,2,3,4,5,6};
    printf("%d\n",countodd(arr,6));
    return 0;
}