#include<stdio.h>
void main(){

char str[50];
int i,j,count,sam[50];

printf("Enter a string\n");
gets(str);

for(i=0;str[i]!='\0';i++){

    count=1;

    if(str[i]!=-1)
    for(j=i+1;str[j]!='\0';j++){

        if(str[i]==str[j]){
                str[j]=-1;
        count++;

        }

    }
    sam[i]=count;

}
for(i=0;str[i]!='\0';i++){

        if(str[i]!=-1){

    printf("%c=%d\n",str[i],sam[i]);
}
}
}
/*

#include<stdio.h>
void main(){

char str[50],fre[50];
int i,j,count;

printf("Enter a string\n");
gets(str);

for(i=0;str[i]!='\0';i++){

count=1;

    for(j=i+1;str[j]!='\0';j++){

        if(str[i]==str[j]){

        count++;
        str[j]=-1;

        }
    }

if(str[i]!=-1)
    printf("%c=%d\n",str[i],count);

}
}
*/
