// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr1size = 5, arr2size = 5, arr_resultsize, i, j;
    int arr2=10;
    
    // elements of first Array
    int a[5] = { 1, 2, 3, 4, 5 };
 
    // elements of Second Array
    int b[5] = { 6, 7, 8, 9, 10 };
    int c[10];
    for (i=0;i<5;i++) {
        c[i] = a[i];
    }
    for (int f= 0,j=5;j<arr2 && f<5;f++,j++) {
        c[j] = b[f];
        // f = f+1;
        // printf("%d\n",b[f]);
    }
    
    for (i=0;i<arr2;i++) {
        printf("%d ",a[i]);
    }

    return 0;
}