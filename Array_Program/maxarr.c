#include<stdio.h>
void main(){
int a[50],max,i,n;

printf("Enter a size limit\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
max=0;
for(i=0;i<n;i++){

    if(a[i]>max){

        max=a[i];
    }
}
printf("max=%d",max);

}
