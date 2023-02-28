#include<stdio.h>

int main ()
{
    int p,n;
    float r, si;
    r = 8.5;
    printf("Enter Principal Amount ");
    scanf("%d",&p);
    printf("\n Enter Time Period ");
    scanf("%d", &n);
    printf("\n Enter Interest rate ");
    scanf("%f", &r);

    si = p*n*r/100;

    printf("%f", si);
    return 0;
}