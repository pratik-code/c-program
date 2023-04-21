#include<stdio.h>
void main(){

int a[50];
int n,ele,i,equal,loc;

printf("Enter a array elemnt\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

printf("Enter a element you want to find\n");
scanf("%d",&ele);


for(i=0;i<n;i++){

    if(a[i]==ele){

    loc=i;
        equal=1;
        break;
    }
}
if(equal==1){

    printf("Element found=%d",loc+1);
}
else{

    printf("Element not found");
}
}
