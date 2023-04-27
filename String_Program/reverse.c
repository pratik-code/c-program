#include<stdio.h>
void main(){

char str[50],temp;
int i,count=0;

printf("Enter a String\n");
gets(str);

for(i=0;str[i]!='\0';i++){

    count++;
}
/*
for(i=count-1;i>=0;i--){

    printf("%c",str[i]);
}
*/

for(i=0;i<count/2;i++){

    temp=str[i];
    str[i]=str[count-1-i];
    str[count-1-i]=temp;
}
for(i=0;str[i]!=0;i++){

    printf("%c",str[i]);
}
}
