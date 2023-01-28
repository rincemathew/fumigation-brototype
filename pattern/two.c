// 1 
// 2 4
// 3 6 9
// 4 8 12 16
// 5 10 15 20 25

#include <stdio.h>


int main() {
    int count=5,a=1, i, j;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",a*j);
        }
        a++;
        printf("\n");   
    }
    return 0;
}


// int main() {
//     int count=5,a, i, j;

//     for (i = 1; i <= count; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ",i*j);
//         }
//         printf("\n");   
//     }
//     return 0;
// }


