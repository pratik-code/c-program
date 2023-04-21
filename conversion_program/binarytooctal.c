#include<stdio.h>
#include <math.h>
void main(){

int n,i,sum,r,num,b[100],j,k;


printf("Enter a no\n");
scanf("%d",&n);
i=0;
sum=0;
while(n>0){

    r=n%10;
    sum=sum+r*pow(2,i);
    n=n/10;
    i++;
}
num=sum;
j=0;
while(num>0){

    b[j]=num%8;
    num=num/8;
    j++;

}
for(k=j-1;k>=0;k--){

    printf("%d",b[k]);
}
}
