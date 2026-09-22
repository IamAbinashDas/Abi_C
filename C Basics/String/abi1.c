#include<stdio.h>
#include<string.h>
// string of 1st nsme and last name & display it
void print_string(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    //printf("\n");
}
int main(){
    char first_name[100]="ABINASH ";
    char last_name[]="DAS";
    print_string(first_name);
    print_string(last_name);
    return 0;
}