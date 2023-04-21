#include<stdio.h>
void main(){

int n ,a[50],i,max1,max2;

printf("Enter a size of an array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

max1=0;
max2=0;

for(i=0;i<n;i++){

    if(a[i]>max1){

        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2&&a[i]!=max1){

        max2=a[i];
    }
}
printf("max2==%d",max2);


}
