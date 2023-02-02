#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        if (i % 2 != 0)
        {
            printf("*");
            printf("\n");
        }
        else
        {
            for (j = 0; j < 3; j++)
            {
                printf("*");
                printf("\n");
            }
        }
        for (j = 0; j < i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}