#include<stdio.h>
void main(){

int n,a[50],i,pos,ele,equal;


printf("Enter a element in array\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("Enter a element you want to delete\n");
scanf("%d",&ele);

for(i=0;i<n;i++){

    if(a[i]==ele){

        pos=i;
        equal=1;
        break;
    }
}
if(equal==1){

    for(i=pos;i<n;i++){

        a[i]=a[i+1];
    }
    n--;
}

for(i=0;i<n;i++){

    printf("%d",a[i]);
}

}
