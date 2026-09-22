#include<stdio.h>
//print number from 1 to 6
void printnum(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    printnum(arr,6);
    return 0;
}