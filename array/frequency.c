#include <stdio.h>


int main() {

    int array[100] = {1,2,3,3,4,4,4,5};
    int count=8, i, j, oocur;

    for (i = 0; i < count; i++)
    {
        oocur = 1;
        for (j= 0;  j< count; j++)
        {
            if (array[i] == array[j] && i != j){
                array[j] = -1;
                oocur++;
            }
            
        }
        if (array[i] != -1)
        {
            printf("%d  %d\n",array[i],oocur) ;
        }
        
        
        
    }
    return 0;
}