#include<stdio.h>
void main(){

int a[50],b[50];
int n,m,i,pos;

printf("Enter a element in 1st array\n");
scanf("%d",&n);
for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

printf("Enter a elemen in 2nd array\n");
scanf("%d",&m);

for(i=0;i<m;i++){

    scanf("%d",&b[i]);
}

printf("Enter a pos you want to insert element\n");
scanf("%d",&pos);

for(i=n-1;i>=pos;i--){

    a[i+m]=a[i];
}
for(i=0;i<m;i++){

    a[i+pos]=b[i];
}

for(i=0;i<m+n;i++)
printf("%d",a[i]);
}
