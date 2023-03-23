#include <stdio.h>

int main()
{
    int i, j;
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((j >= 6 - i) && (j <= i + 4))
                printf("*");

            else
                printf(" ");
        }
        
        printf("\n");
    }

    printf("\n");
    return 0;
}