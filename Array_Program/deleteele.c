#include<stdio.h>
void main(){

int a[50],i,j,pos,n;


printf("Enter a element in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

printf("Enter a pos you want to delete\n");
scanf("%d",&pos);

for(i=pos;i<n;i++){

    a[i]=a[i+1];

}
n--;
for(i=0;i<n;i++){

    printf("%d",a[i]);
}

}
