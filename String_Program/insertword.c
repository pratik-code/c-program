#include<stdio.h>
#include<stdlib.h>
void main(){

char str1[50],str2[50];

int i,j,count1,count2,pos;

printf("Enter a string\n");
gets(str1);
printf("Enter a string you want to add\n");
gets(str2);

printf("Enter a pos yu want to insert a string\n");
scanf("%d",&pos);

while(getchar()!='\n');
count1=0;
for(i=0;str1[i]!='\0';i++){

    count1++;
}
count2=0;
for(i=0;str2[i]!='\0';i++){

    count2++;
}

for(i=count1-1;i>=pos;i--)
{

    str1[i+count2]=str1[i];
}
for(j=0;j<=count2-1;j++){

    str1[pos+j]=str2[j];
}
puts(str1);
}
