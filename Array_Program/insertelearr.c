#include<stdio.h>
void main(){

int n,a[50],ele,loc,i;

printf("Enter a size of an array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("Enter a loc you want to insert\n");
scanf("%d",&loc);

printf("Enter  a elemnt you want to add\n");
scanf("%d",&ele);

for(i=n-1;i>=loc;i--){

    a[i+1]=a[i];
}
    a[loc]=ele;
for(i=0;i<=n;i++){
    printf("%d\t",a[i]);
}

}
