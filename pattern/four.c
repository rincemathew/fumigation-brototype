#include <stdio.h>
//delete even numbers

int main() {

    int array[] = {1,2,3,4,4,5,5,6};
    int i,j,count=8,length;


    length = sizeof(array)/sizeof(array[0]);
    printf("%d\n",length);


    for (i = 0; i < count; i++)
    {
        if (array[i]%2==0)
        {
            for (j = i; j < count; j++)
            {
              array[j] = array[j+1];
            }
            count--;
            i--; 
        }  
    }
    for (i = 0; i < count; i++)
    {
        printf("%d ",array[i]);
    }
    
    



    return 0;
}