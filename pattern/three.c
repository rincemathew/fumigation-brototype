//  1 2 3 4 5 
//   2 4 6 8
//    3 6 9
//     4 8
//      5

#include <stdio.h>

int main() {
    int  i, j,k,f;

    for (i = 1; i <=5; i++)
    {
        for (f = 0; f < i; f++)
        {
            printf(" ");
        }
        
       k=1;
        for (j = 5; j >=i ; j--)
        { 
        
            printf("%d ",i*k);
            k++;
        }
         printf("\n");   
    }
    return 0;
}