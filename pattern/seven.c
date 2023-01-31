#include <stdio.h>

int main() {

    int a, i ,j,z;

    for (i = 0; i < 3; i++)
    {
        a=1;
       for (j = 0; j <i+3 ; j++)
        {
            
            for (z = 0; z < a; z++)
            {
                printf("*");
            }
            a++;
            printf("\n");
        } 
    }
    

    return 0;
}