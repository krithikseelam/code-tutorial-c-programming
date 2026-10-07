#include <stdio.h>

float sum(float, float);
float subtract(float, float);
float product(float, float);
float division(float, float);

int main(void) {
    float A, B;

    printf("Give two numbers x and y: ");
    scanf("%f,%f", &A, &B);

    printf("The sum of %.2f and %.2f is %.2f\n",
           A, B, sum(A, B));

    printf("The subtraction of %.2f and %.2f is %.2f\n",
           A, B, subtract(A, B));

    printf("The product of %.2f and %.2f is %.2f\n",
           A, B, product(A, B));

    if (B != 0) {
        printf("The division of %.2f and %.2f is %.2f\n",
               A, B, division(A, B));
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

float sum(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float product(float x, float y) {
    return x * y;
}

float division(float x, float y) {
    return x / y;
}
