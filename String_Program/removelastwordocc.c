#include<stdio.h>
void main(){

char str1[50],str2[50];
int i,j,k,l1,l2,pos;

printf("Enter a string\n");
gets(str1);

printf("Enter a sub string\n");
gets(str2);
l1=0;
for(i=0;str1[i]!='\0';i++){

    l1++;
}
l2=0;
for(i=0;str2[i]!='\0';i++){

    l2++;
}
for(i=l1-1;i>=0;i--){

    k=i;

    for(j=0;j<=l2-1;j++){

        if(str1[k]!=str2[j]){

                break;
            }
        k++;
    }
    if(j==l2){
pos=i;
break;
}
}
for(i=pos;str1[i]!='\0';i++){

    str1[i]=str1[i+l2];
}
puts(str1);
}
