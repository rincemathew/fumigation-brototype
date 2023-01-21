// find first odd number and delete 2 element after that.

#include <stdio.h>

int main () {
    int array[100] = {4,6,7,3,4,9,12,34};
    int count = 8, i, j, l=0;

    for (i = 0; i < count; i++)
    {
        if (array[i]%2 != 0)
        {
            for (j = i+1; j < count; j++)
            {
                array[j] = array[j+2];
                array[j+1] = array[j+3];
            }
            count = count-2;
            break;
        } 
    }

    for (i = 0; i < count; i++)
    {
        printf("%d\n",array[i]);
    }
    
    


    return 0;
}