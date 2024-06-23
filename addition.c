#include <stdio.h>

int main() {
    int number1, number2, sum;

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &number1);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    // Calculate the sum of the two integers
    sum = number1 + number2;

    // Display the result with a descriptive message
    printf("The addition of %d and %d is %d.\n", number1, number2, sum);

    return 0;
}
