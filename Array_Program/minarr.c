
#include<stdio.h>
void main(){
int a[50],min,i,n;

printf("Enter a size limit\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++){

    if(a[i]<min){

        min=a[i];
    }
}
printf("min=%d",min);

}
