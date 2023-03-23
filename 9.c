#include <stdio.h>

int main()
{
    int i, j, k;
    printf("\n");
    
    for (i = 0; i < 4; i++)
    {
        k = 1;
        for (j = 0; j < 7; j++)
        {
            if (j >= i  &&  j <= 6-i)
            {
                printf("%d", k);
                j < 3 ? k++ : k--;
            }

            else
                printf(" ");    
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}