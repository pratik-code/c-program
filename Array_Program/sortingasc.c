#include<stdio.h>
void main(){

int n,i,j,temp,a[50];

printf("Enter a size of an aray\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){

    for(j=0;j<n-1;j++){

        if(a[j]>a[j+1]){

            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
/*for(i=0;i<n;i++){

    printf("%d\t",a[i]);
}
*/

for(i=n-1;i>=0;i--){

    printf("%d\t",a[i]);
}
}
