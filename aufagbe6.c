#include <stdio.h>
#define N 1000
int count_characters(char str[], char c){
int counter;
counter=0;
int i;
for(i=0;i<N;i++){
        if(str[i]==c)
        counter++;}
return counter;}
int main(){
    char text[N];
    char c;
printf("Geben Sie bitte den Text ein!\n");
fgets(text,N,stdin);
printf("Geben Sie die zu zählende Buchstabe:\n");
scanf("%c",&c);


    printf("%c kommt %d mal",c, count_characters(text,c));
    return 0;
