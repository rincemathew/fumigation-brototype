#include <stdio.h>


// Write a program to count the total number of duplicate elements in an array.

int main() {
    int length;
    int array[]={3,4,5,6,7,3,4,6,7};
    printf("hello");

    length = sizeof(array)/ sizeof(array[0]);
    for(int i=0;i<length;i++) {

        printf("%d",array[i]);
    }


    printf("hai %d",length);
    // printf("Duplicate elements in given array: \n");  
    // //Searches for duplicate element  
    // for(int i = 0; i < length; i++) {  
    //     for(int j = i + 1; j < length; j++) {  
    //         if(array[i] == array[j])  
    //             printf("%d\n", array[j]);  
    //     }  
    // } 


    return 0;
}