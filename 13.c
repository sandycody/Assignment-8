#include<stdio.h>

int main()
{
    int i, j;
    char k;
    printf("\n");
    
    for (i = 0; i < 7; i++)
    {
        k = 'A';
        for (j = 0; j <= 6-i; j++)
            printf("%c", k++);

        for(j = 0; j < (2*i-1); j++)
            printf(" ");

        if (i == 0)
            k--;

        while (k != 'A')
            printf("%c", --k);

        printf("\n");    
    }

    printf("\n");
    return 0;
}