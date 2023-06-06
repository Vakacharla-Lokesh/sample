#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k;
    float fact,sum =0;
    for(i=1;i<=7;i++)
    {
        fact =1;
        for(k=i; k>0; k--)
        {
            fact *= k;
        }
        sum = sum + i/fact;
    }
    printf("Sum of the terms is: %f",sum);
}