#include<stdio.h>
#include<string.h>
//salting process(salt=143)
void salting(char pass[]){
    char salt[]="143";
    char newpass[200];
    strcpy(newpass,pass);
    strcat(newpass,salt);
    puts(newpass);
}
int main(){
    char pass[100];
    scanf("%s",pass);
    salting(pass);
    return 0;
}