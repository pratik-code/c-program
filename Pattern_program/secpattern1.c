 #include<stdio.h>
 void main(){

 int i,j,x=1;

 for(i=1;i<=5;i++){

    for(j=1;j<=5;j++){

        if(i>=j){

            printf("%d",x);
            x++;
            }
        else{
            printf(" ");
        }

    }
    printf("\n");
 }

 }
