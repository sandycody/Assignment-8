#include<stdio.h>

int main()
{
    int i, j;
    char k;
    printf("\n");

    for (i = 0; i < 4; i++)
    {
        k = 'A'; 
        for (j = 0; j < 7; j++)
        {
            if (j >= i  &&  j <= 6-i)
            {
                printf("%c", k);
                j < 3 ? k++ : k--;
            }

            else
                printf(" ");
            
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}