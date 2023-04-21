#include<stdio.h>
void main(){

int a[50],b[50];
int n,i,j,count;

printf("Enter a element in arrray\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}


for(i=0;i<n;i++){

    count=1;
    if(a[i]!=-1)

    for(j=i+1;j<n;j++){

        if(a[i]==a[j]){
            a[j]=-1;
            count++;

        }
    }
    b[i]=count;
}
for(i=0;i<n;i++){
        if(a[i]!=-1)
   printf("%d=%d\n",a[i],b[i]);
}
}
