#include<stdio.h>
void main(){

int n,a[50],i,shift,temp;

printf("Enter a size of an array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("How many times you want to rotate array\n");
scanf("%d",&shift);
while(shift){
temp=a[n-1];
for(i=n-1;i>=1;i--){

    a[i]=a[i-1];
}
a[0]=temp;
shift--;
}
for(i=0;i<n;i++){

    printf("%d",a[i]);
}
}

