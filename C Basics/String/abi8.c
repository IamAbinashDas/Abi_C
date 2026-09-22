#include<stdio.h>
#include<string.h>
//convert lowercase vowels to upercase 
int main(){
    char ch[100];
    printf("Enter a string:\n");
    fgets(ch,100,stdin);

    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'){
            ch[i]='A';
        }
        if(ch[i]=='e'){
            ch[i]='E';
        }
        if(ch[i]=='i'){
            ch[i]='I';
        }
        if(ch[i]=='o'){
            ch[i]='O';
        }
        if(ch[i]=='u'){
            ch[i]='U';
        }
    }
    printf("Converted string:%s",ch);
    return 0;
}