#include<stdio.h>
#include <math.h>
void main(){

int n,i,sum=0,r;
i=0;

printf("Enter a no\n");
scanf("%d",&n);

while(n>0){

    r=n%10;
    sum=sum+r*pow(2,i);
    n=n/10;
    i++;
}
printf("%d",sum);
}
