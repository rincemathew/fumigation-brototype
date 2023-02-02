#include <stdio.h>

int main() {

int i, j, p;
    for (i = 1; i <= 5; i++)
    {
        if (i%2==0) {
            p=5;
        }else{
            p=3;
        }
        
        for (j = 0; j < p; j++)
        {
            printf("*");
        }
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("*\n");
        }
    }
    return 0;
}