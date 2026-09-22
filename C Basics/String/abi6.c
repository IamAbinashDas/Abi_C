#include<stdio.h>
#include<string.h>
//count the no of vowels in a string
int count_vowel(char str[]){
    int count=0;
    for (int i=0; str[i] != '\0'; i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
         count++;
        }
         
    }
    return count;   
}
int main(){
    char str[]="aeiox";
    printf("vowels are: %d\n",count_vowel(str));
    return 0;
}