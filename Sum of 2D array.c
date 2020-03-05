#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i, j, row, column;
    printf("Enter the numbers of rows : ");
    scanf("%d", &row);
    printf("Enter the number of column : ");
    scanf("%d", &column);

    printf("Enter the value of A matrix : ");
    for(i=0; i<row; i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the values of B matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n");
    printf("Sum of Two matrix is : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)

        {

            printf("%d\t", c[i][j]);


        }
        printf("\n");
    }
    return 0;
}
