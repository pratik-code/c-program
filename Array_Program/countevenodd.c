
#include<stdio.h>
void main(){
int a[50],even=0,odd=0,i,n;

printf("Enter a array limit\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){

    if(a[i]%2==0){

        even++;
    }
    else{

        odd++;
    }
}
printf("Even=%d\n",even);
printf("Odd=%d",odd);
}
