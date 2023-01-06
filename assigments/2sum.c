#include <stdio.h>

int main() {

    int number1;
    float number2, sum;

    printf("enter two numbers");
    scanf("%d%f",&number1,&number2);
    sum = number1+number2;
    printf("sum: %f", sum);

    return 0;
}