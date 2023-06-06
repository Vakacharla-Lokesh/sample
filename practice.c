#include<stdio.h>
#include<string.h>
struct employee
{
    char name[100];
    int code;
    int salary;
    int depnumb;
};

void main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee e[n], temp;
    for(int i = 0; i<n ; i++)
    {
        printf("Enter code: ");
        scanf("%d", &e[i].code);
        printf("Enter name: ");
        scanf("%s", &e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter department number: ");
        scanf("%d", &e[i].depnumb);
    }
    for(int i = 0; i<n-1; i++)
    {
        for (int j = 0; j<n-1; j++)
        {
            if (e[j].code > e[j+1].code)
            {
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }
    for (int i = 0; i<n; i++)
    {
        puts(e[i].name);
        printf("\nCode: %d",e[i].code);
        printf("\nSalary: %d", e[i].salary);
        printf("\nDepartment number: %d\n", e[i].depnumb);
    }
}