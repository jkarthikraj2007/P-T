#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Keep a copy of the original number if you want to print it later
    int original = num;

    while (num != 0) {
        digit = num % 10;   // extract the last digit
        sum += digit;       // add it to the running total
        num /= 10;          // remove the last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    return 0;
}