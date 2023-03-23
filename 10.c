#include <stdio.h>

int main()
{
    int i, j, k;
    printf("\n");
    
    for (i = 0; i < 4; i++)
    {
        k = 1;
        for (j = 0; j <= 3-i; j++)
            printf("%d", k++);
           
        for (j = 0; j < (2*i-1); j++)
            printf(" ");

        if (i == 0)
            k--;

        while (k != 1)
            printf("%d", --k);
        
        printf("\n");
    }

    printf("\n");
    return 0;
}