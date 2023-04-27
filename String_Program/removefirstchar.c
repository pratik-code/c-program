#include<stdio.h>
void main(){

char str[50],ch;
int i,pos;

printf("Enter a string\n");
gets(str);

printf("Enter a character you want to remove\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++){

    if(str[i]==ch){

        pos=i;
        break;
    }
}
for(i=pos;str[i]!='\0';i++){

    str[i]=str[i+1];
}
puts(str);
}
