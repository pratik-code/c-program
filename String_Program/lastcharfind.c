#include<stdio.h>
void main(){

char str[50],ch;
int i,last,count;

printf("Enter a string\n");
gets(str);

printf("Enter a character you want to find at last occuarnce\n");
scanf("%c",&ch);

count=0;

for(i=0;str[i]!='\0';i++){
count++;
}
for(i=count-1;i>=0;i--){

    if(str[i]==ch){

        last=i;
        break;
    }
}
printf("%d",last);
}
