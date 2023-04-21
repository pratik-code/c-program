#include<stdio.h>
void main(){

int n,a[50],i,min1,min2;

printf("Enter a element in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

min1=a[0];
min2=a[0];

for(i=0;i<n;i++){

    if(a[i]<min1){

        min2=min1;
        min1=a[i];
    }
    else if(a[i]!=min1 && a[i]<min2){

        min2=a[i];
    }
}
printf("%d",min2);
}
