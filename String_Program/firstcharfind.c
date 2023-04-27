#include<stdio.h>
void main(){

char str[50],ch;
int i,first;

printf("Enter a string\n");
gets(str);

printf("Enter a character you want to find at first occuarnce\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++){

    if(str[i]==ch){

        first=i;
        break;
    }
}
printf("%d",first);
}
