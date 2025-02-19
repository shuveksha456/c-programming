
#include <stdio.h>
#include <math.h> // for the pow() function

int main() {
    // Declare variables
    double principal, rate, amount; 
    int times_compounded, years;

    // Get user input
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    rate /= 100; // convert percentage to decimal
 printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &times_compounded);

    printf("Enter the number of years the money is invested or borrowed for: ");
    scanf("%d", &years);

    // Calculate the compound interest
    amount = principal * pow((1 + rate / times_compounded), times_compounded * years);

    // Output the result
    printf("The amount after %d years is: %.2lf\n", years, amount);

    return 0;
}
// Certainly! To calculate compound interest in C, you'll need to use the formula:
// A=P(1+ r/n)^nt
// where:1
// 𝐴
// A is the amount of money accumulated after n years, including interest.
// 𝑃
// P is the principal amount (the initial amount of money).
// 𝑟
// r is the annual interest rate (decimal).
// 𝑛
// n is the number of times that interest is compounded per year.
// 𝑡
// t is the time the money is invested or borrowed for, in years.
// Explanation:
// 1.Include Required Libraries: We include stdio.h for input and output functions and math.h for the pow function used to raise a number to a power.
// 2.Get User Input: We prompt the user for the principal, rate of interest, number of times compounded per year, and the number of years.
// 3.Convert Rate to Decimal: Since the interest rate is usually given in percentage, we divide by 100 to convert it to a decimal.
// 4.Calculate Compound Interest: We use the formula to compute the amount after interest.
// Output the Result: We display the result rounded to two decimal places for clarity.