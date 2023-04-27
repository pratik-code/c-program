#include<stdio.h>
void main(){

char str1[50],str2[50];
int i,flag=0;

printf("Enter first a string\n");
gets(str1);

printf("Enter second string\n");
gets(str2);

for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++){

    if(str1[i]!=str2[i]){
        flag=1;
        break;
    }
}
if(flag==1){

    printf("string are not equal");
}
else{

    printf("string are equal");
}

}
