#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    char s[100];
    int count, max =1, index=0;
    strcpy(s,"aaaaeeebbee");
    for(int i =0; i<strlen(s); i++)
    {
        count =1;
        for(int j = i+1; j<strlen(s); j++)
        {
            if (s[j] == s[i])
            {
                count++;
                if(count > max)
                {
                    max = count;
                    index = i;
                }
            }
            
        }
    }
    printf("%c",s[index]);
}