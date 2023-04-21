#include<stdio.h>
void main(){

int i,j,k=1,s;

for(i=1;i<=9;i++){
    i<=5?k++:k--;
    s=1;
    for(j=1;j<=5;j++){

        if(i<=k && s){

            printf("*");
            s=0;
        }
        else{

            printf(" ");
            s=1;
        }
    }
    printf("\n");
}

}
