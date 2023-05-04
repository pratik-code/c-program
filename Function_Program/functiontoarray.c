#include<stdio.h>
int display(int[],int);
void main(){

int n,arr[50],sum,i;

printf("Enter a size of an array");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&arr[i]);
}
sum=display(arr,n);
printf("%d",sum);
}

int display(int a[],int size){

int sum=0,i;

for(i=0;i<size;i++){

    sum=sum+a[i];
}
return(sum);
}
