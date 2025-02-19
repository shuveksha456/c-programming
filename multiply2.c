#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Multiply the two numbers
    result = num1 * num2;

    // Output the result
    printf("The result of multiplying %.2f and %.2f is %.2f\n", num1, num2, result);

    return 0;
}