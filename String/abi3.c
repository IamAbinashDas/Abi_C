#include<stdio.h>
#include<string.h>
//input a string by using %c
int main(){
    char name[100];
    //char ch;int i=0;
    fgets(name,100,stdin);
    /*while(ch!='\n'){
        scanf("%c",&ch);
        name[i]=ch;
        i++;
        }*/
   // name[i]='\0';
    puts(name);
    return 0;
}