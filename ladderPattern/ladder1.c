// *****
// *   *
// *   *
// *   *
// *****


#include <stdio.h>

int main() {


    int count=5, i , j;
    
    for (i = 0; i < count; i++)
    {
      for (j = 0; j < count; j++)
      {
        if (j==0 || j==count-1 || i==0 || i==count-1)
        {
            printf("*");
        } else {
            printf(" ");
        }
        
      }
      printf("\n");
      
    }
    


    return 0;
}