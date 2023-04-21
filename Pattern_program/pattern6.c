#include<stdio.h>
void main(){

int i,j,x;
for(i=1;i<=5;i++){

    x=i+1;
    for(j=1;j<=5;j++){

        printf("%d",x);
        x=x+2;
    }
    printf("\n");
}

}
