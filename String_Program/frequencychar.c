#include<stdio.h>
void main(){

char str[50],ch;
int i,count=0;

printf("Enter a string\n");
gets(str);

printf("Enter a charater you want to serach\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++){

    if(str[i]==ch){

        count++;
    }
}
printf("%d",count);
}
