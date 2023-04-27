#include<stdio.h>
#include<stdlib.h>
void main(){

char str[50],ch,s;
int i;
printf("Enter a string\n");
gets(str);

printf("Enter a char yu want to add\n");
scanf("%c",&ch);
printf("Enter a char yu want to replace");
while(getchar()!='\n');
scanf("%c",&s);

for(i=0;str[i]!='\0';i++){

    if(str[i]==ch){

        str[i]=s;
    }
}
puts(str);
}
