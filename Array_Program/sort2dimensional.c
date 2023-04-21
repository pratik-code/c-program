#include<stdio.h>
#define maxrow 10
#define maxcol 10
void main(){

int matrix[maxrow][maxcol];
int i,j,k,l,temp;

for(i=0;i<3;i++){

    for(j=0;j<3;j++){

        scanf("%d",&matrix[i][j]);
    }
}

for(i=0;i<3;i++){

    for(j=0;j<3;j++){

        for(k=0;k<3;k++){

            for(l=0;l<3;l++){

                if(matrix[i][j]<matrix[k][l]){

                    temp=matrix[i][j];
                    matrix[i][j]=matrix[k][l];
                    matrix[k][l]=temp;
                }
            }
        }
    }

}
printf("Matrix is\n");

for(i=0;i<3;i++){

    for(j=0;j<3;j++){

        printf("%d",matrix[i][j]);
    }
    printf("\n");
}

}

