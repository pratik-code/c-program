#include<stdio.h>
void main(){
char str[50],ch;
int i,j,pos;

printf("Enter a string\n");
gets(str);

printf("Enter a character you want to remove\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++){

    if(str[i]==ch){

        pos=i;

        for(j=pos;str[j]!='\0';j++){

            str[j]=str[j+1];
        }
    }
}
puts(str);
}
