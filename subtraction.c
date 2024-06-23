#include <stdio.h>

int main() {
    int number1, number2, difference;

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &number1);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    // Calculate the difference (subtraction) of the two integers
    difference = number1 - number2;

    // Display the result with a descriptive message
    printf("The subtraction of %d and %d is %d.\n", number1, number2, difference);

    return 0;
}
