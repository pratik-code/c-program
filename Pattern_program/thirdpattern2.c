#include<stdio.h>
void main(){

int i,j;

for(i=0;i<5;i++){

    for(j=1;j<=5;j++){


        if(j<=5-i){

            printf("%d",i%2);

        }
        else{

            printf(" ");
        }
    }
    printf("\n");
}

}
