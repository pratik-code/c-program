#include <stdio.h>

#define MAXROW      10
#define MAXCOL      10

int main()
{
    int matrix1[MAXROW][MAXCOL];
    int matrix2[MAXROW][MAXCOL];
    int matrix3[MAXROW][MAXCOL];
    int i,j,r,c,sum,k;

    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    printf("\nEnter matrix first elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

     printf("\nEnter matrix Second elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix is :\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
                sum=0;
            for(k=0;k<r;k++){
            sum=sum+matrix1[i][k]*matrix2[k][j];
            matrix3[i][j]=sum;
        }
                }


    }

    for(i=0;i< r;i++)
    {

        for(j=0;j<c;j++)
        {
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
            }
}
