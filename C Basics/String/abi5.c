#include<stdio.h>
#include<string.h>
/*write a func named slice,
which take a string &
return a sliced string from index n to m*/

void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
}
int main(){
    char str[]="AshutoshJena";
    slice(str,3,6);
    return 0;
}