#include <stdio.h>

int main() {
    int i, j, k=2;
    for (size_t i = 0; i < 5; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        k=k*2;
        printf("\n");
        
    }
    

    return 0;
}