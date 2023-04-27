#include<stdio.h>
void main(){

char str[50];
int i,count=0,equal;

printf("Enter a String\n");
gets(str);
for(i=0;str[i]!='\0';i++){

    count++;
}
printf("%d",count);
for(i=0;i<count/2;i++){

    if(str[i]!=str[count-1-i]){

        equal=1;
        break;
    }
}
if(equal==1){

    printf("not");
}
else{
    printf("palindrome string");
}
}
