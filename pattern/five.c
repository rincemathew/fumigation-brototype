// ****
// ***
// *
// *
// *
// ***
// **
// *
// *
// *
// **
#include <stdio.h>

int main()
{

    int count=3,i,j,f=4;


    for ( i = 0; i < count; i++)
    {
        for (j = 7; j > i*2; j--)
        {
            printf("*");
            if (j==f)
            {
                printf("\n");
            }
        }
        f++;
        printf("\n");

        if (i==2)
            {
                break;
            }


        for (j = 0; j < 3; j++)
        {
            printf("*");
            printf("\n");
            
            
        }
        
    }
    

    return 0;
}