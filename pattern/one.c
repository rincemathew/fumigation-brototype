// 1
// 1 2 3
// 22
// 22
// 4 5 6 7
// 333
// 333
// 333
// 8 9 10 11 12
#include <stdio.h>
int main () {

    int count = 3, i, j, p=1;
    int length = 12,count2=3;

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
       for (j=1; j <= count2; j++)
       {
        printf("%d ",p);
        p++;
       }
       count2++;
       printf("\n");    
    }
    return 0;
}