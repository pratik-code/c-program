#include<stdio.h>
void main(){

char str1[50],str2[50];
int count1,count2;
int i;

printf("Enter a string1\n");
gets(str1);

printf("Enter a string2\n");
gets(str2);

count1=0;
for(i=0;str1[i]!='\0';i++){

    count1++;
}
count2=0;
for(i=0;str2[i]!='\0';i++){

    count2++;
}

for(i=0;i<=count2;i++){

    str1[count1+i]=str2[i];
}

for(i=0;str1[i]!='\0';i++){

    printf("%c",str1[i]);
}
}
