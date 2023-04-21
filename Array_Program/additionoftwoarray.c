#include<stdio.h>
void main(){

int n,m,a[50],b[50],c[50],i;

printf("Enter a element 1st in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("Enter a element in 2nd array\n");
scanf("%d",&m);
for(i=0;i<m;i++){

scanf("%d",&b[i]);
}

for(i=0;i<n;i++){

    c[i]=a[i]+b[i];
}
for(i=0;i<n;i++){

    printf("%d\t",c[i]);
}

}
