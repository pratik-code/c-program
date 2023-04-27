#include<stdio.h>
void main(){

char str[50],ch;
int i,count,pos;

printf("Enter a string\n");
gets(str);

printf("Enter a character yu want to remove from last");
scanf("%c",&ch);

count=0;
for(i=0;str[i]!='\0';i++){

    count++;
}
for(i=count-1;i>=0;i--){

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

