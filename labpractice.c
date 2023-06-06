#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100], temp[100];
    int vowcount =0, conscount = 0, repeat = 0;
    printf("Enter any sentence: ");
    gets(ch);
    strlwr(ch);
    strcpy(temp, ch);
    for(int i =0; i<strlen(temp); i++)
    {
        if(temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u')
        {
            vowcount = 0;
            for(int j = i; j< strlen(temp); j++)
            {
                if (temp[i] == temp[j] && repeat == 0)
                {
                    vowcount++;
                    temp[j] = '$';
                }
            }
            printf("The frequency of %c is: %d\n", ch[i], vowcount);
        }
    }
}