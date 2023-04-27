#include<stdio.h>
void main(){

char str1[50],str2[50];
int i;

printf("Enter a string\n");
gets(str1);

printf("Enter a string2\n");
gets(str2);

for(i=0;str1[i]!='\0';i++){

    str2[i]=str1[i];
}
puts(str2);
puts(str1);

}
