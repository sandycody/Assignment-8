#include<stdio.h>

int main()
{
    int i, j;
    char k;
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        k = 'A';
        for (j = 0; j < 9; j++)
        {
            if (j >= 4-i && j <= 4+i)
            {
                printf("%c", k);
                j < 4 ? k++ : k--;
            }    

            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}