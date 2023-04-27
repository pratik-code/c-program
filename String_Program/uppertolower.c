#include<stdio.h>
void main(){

char str[50];
int i;

printf("Enter a string\n");
gets(str);

for(i=0;str[i]!='\0';i++){

    if(str[i]>=65 && str[i]<=90){

        str[i]=str[i]+32;
    }

}
puts(str);

}
