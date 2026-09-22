#include<stdio.h>
#include<string.h>
//check the ch is present in the string or not
void check_char(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("character is present :\n");
            return;
        }
    }
     printf("character is not present :\n");
}

int main(){
    char str[]="abinashdas";
    char ch='e';
    check_char(str,ch);
    return 0;
}