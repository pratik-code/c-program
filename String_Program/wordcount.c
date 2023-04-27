#include<stdio.h>
void main(){

char str[50];
int i,word=0,space=0;

printf("Enter a string\n");
gets(str);


for(i=0;str[i]!='\0';i++){

    if(str[i]==' ' && str[i-1]!=' '){

        word++;
    }
}
printf("%d",word);
}
