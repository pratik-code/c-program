#include<stdio.h>
#include<stdlib.h>
void main(){

int a[10][20],i,j;
printf("Enter a matrix element\n");
for(i=0;i<3;i++){

    for(j=0;i<2;j++){

        scanf("%d",&a[i][j]);
    }
}

fflush(stdout);
printf("Matrix are");
for(i=0;i<3;i++){

    for(j=0;j<3;j++){

        printf("%d",a[i][j]);
    }
    printf("\n");
}
}
