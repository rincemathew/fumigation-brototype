#include <stdio.h>

int main() {

int i, j, p=4;
    for (i = 1; i <= 3; i++)
    {
        for ( j = 0; j < i*5; j++)
        {
            printf("*");
        }
            printf("\n");

        for (j = 1; j <= p; j++)
        {
            printf("*");
            if (j%2==0)
            {
            printf("\n");
                
            }
            
        }
        p=p+2;

        
        
    }
    


    return 0;
}