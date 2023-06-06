#include<stdio.h>
void main()
{
    int arr1[100][100], arr2[100][100],prod[100][100], order;
    printf("Enter Order of matrix: ");
    scanf("%d", &order);
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i< order; i++)
    {
        for(int j =0; j<order; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i< order; i++)
    {
        for(int j =0; j<order; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i =0; i<order; i++)
    {
        for(int j =0; j< order; j++)
        {
            prod[i][j] = 0;
            for(int k = 0; k<order; k++)
            {
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}
