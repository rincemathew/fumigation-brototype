// Write a program to print all unique elements in an array.

#include <stdio.h>


int main() {

    char array[] = "abcdeabaff";
    int length;

    length = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<length-1;i++) {
        for(int j=i+1;j<length-1;j++) {
            // printf("%c\n",array[j]);
            if(array[i] != array[j]) {
                printf("%c%C\n",array[i],array[j]);
            }
        }
    }
    return 0;
}