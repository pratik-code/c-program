#include <stdio.h>

#define MAXROW      10
#define MAXCOL      10

int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;

    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i< r;i++)
    {

        for(j=0;j<c;j++)
            {
                if((i==j)||(i+j==2)){
            printf("%d",matrix[i][j]);
        }
        else{

            printf(" ");
        }
            }
        printf("\n");
            }

    return 0;
}

