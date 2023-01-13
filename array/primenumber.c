#include <stdio.h>
#include <string.h>

int main()
{
    
   int a[100] = {2,9,7,5,4,10};
   int count=6, i, j;
   
   for (i=0; i<count; i++) {
       int g=0;
       for(j=2; j<a[i]; j++) {
           if(a[i]%j==0) {
               g=1;
               break;
       }}
       if (g==0) {
           printf("%d\n",a[i]);
       }
   }
    return 0;
}