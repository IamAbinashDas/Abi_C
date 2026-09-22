#include<stdio.h>
#include<string.h>
//highest frequency ch in a string
int main(){
    char str[100];
    int freq[250]={0};
    int maxfreq=0;
    char maxchar;
    printf("Enter a string:\n");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!="" && str[i]!='\n'){
            str[i]++;
        }
    }
    for(int i=0;i<250;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            maxchar=maxfreq;
        }
    }
    printf("Highest freq char %d is :%c\n",maxfreq,maxchar);
    return 0;
}