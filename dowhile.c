// #include <stdio.h>
// int main()
// {
//     int i=1;
//     do{
//       printf("%d",i);
//       i++;
//     } while (i<=5);
//     return 0;
  
// }

//reversed 0f 1234 4321
// #include <stdio.h>

// int main() {
//     int num = 1234; // The number to reverse
//     int reverse = 0;

//     // Do-while loop to reverse the number
//     do {
//         reverse = reverse * 10 + num % 10;
//         num = num / 10;
//     } while (num != 0);

//     // Print the reversed number
//     printf("Reversed Number: %d\n", reverse);

//     return 0;
// }

//sum of 1234
#include <stdio.h>
int main() {
    int number = 1234;
    int sum = 0;
    int digit;

    // Loop to calculate the sum of the digits
    while (number > 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;         // Add it to the sum
        number /= 10;         // Remove the last digit
    }

    // Print the result
    printf("The sum of the digits of 1234 is: %d\n", sum);

    return 0;
}