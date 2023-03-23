#include<stdio.h>

int main()
{
    int i, j;
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if ( (j == i) || (j == 8-i) || (i == 0 && j > 0 && j < 8) )
                printf("*");

            else
                printf(" ");    
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}