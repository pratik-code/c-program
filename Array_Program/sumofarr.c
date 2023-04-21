#include<stdio.h>
void main(){

int n,i,sum=0,a[50];

printf("Enter a element in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){

        if(a[i]%2==1){

    sum=sum+a[i];
        }
}
printf("%d",sum);
}
