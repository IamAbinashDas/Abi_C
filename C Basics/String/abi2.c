#include<stdio.h>
#include<string.h>
//input user name and find its length
int count_length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("length is:%d\n",count_length(name));
    //strlen(name);
    //printf("length is:%d\n",strlen(name));
    return 0;
}