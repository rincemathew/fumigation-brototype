// Write a program to find the simple interest.
// The program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(P*R*n)/100)


#include <stdio.h>


int main() {
    int P;
    float SI,R,n;

    printf("enter Principal amount");
    scanf("%d",&P);
    printf("enter Interest rate");
    scanf("%f",&R);
    printf("enter number of years");
    scanf("%f",&n);
    SI = (P*R*n)/100;
    printf("Simple intrest is: %f",SI);

    return 0;
}
