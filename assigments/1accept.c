// Accept a char input from the user and display it on the console.

#include <stdio.h>

int main() {
    char text;
    // for int %d, for float %f, for character %c
    // %d,%f,%c etc these are called escape characters
    printf("Enter some text ");
    printf("Enter some text ");
    scanf("%c", &text);
    printf("you have entered %c", text);

    return 0;
}




// //for more than one char
// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     char text[50];
//     // for int %d, for float %f, for character %c
//     // %d,%f,%c etc these are called escape characters
//     printf("Enter some text ");
//     scanf("%s", &text);
//     printf("you have entered %s", text);

//     return 0;
// }