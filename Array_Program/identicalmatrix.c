
#include <stdio.h>

#define MAXROW      10
#define MAXCOL      10

int main()
{
    int matrix1[MAXROW][MAXCOL];
     int matrix2[MAXROW][MAXCOL];
    int i,j,r,c,equal=0;

    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    printf("\nEnter First matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nEnter Second matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            if(matrix1[i][j]!=matrix2[i][j]){

                equal=1;
                break;
            }
        }

    }

    if(equal==1){

        printf("Matrix are not identical");
    }
    else{
        printf("Matrix are identical");
    }
}
