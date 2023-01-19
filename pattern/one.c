#include <stdio.h>


int main () {

    int count = 3, i, j;
    int length = 12;

    for (i=1; i<= count; i++)
    {
        for (j=1; j<=i*i; j++)
       {
        printf("%d",i);
        if (j%i==0)
        {
            printf("\n");
        }
       }
    }
    

    return 0;
}