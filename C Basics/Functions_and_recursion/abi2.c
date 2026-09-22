#include<stdio.h>
//if indian print "namaste" or if french print "bonjour"
void namaste();
void bonjour();

int main(){
    char ch,i;
    printf("Enter i for indian and f for french\n");
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }else {
        bonjour();
    }

    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");

}