#include<stdio.h>

void main()
{
    int a[100][100];
    int i,j, rows, columns;
    printf("Enter Number of rows ");
    scanf("%d", &rows);
    printf("Enter Number of cloumns ");
    scanf("%d", &columns);
    printf("Enter values ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}