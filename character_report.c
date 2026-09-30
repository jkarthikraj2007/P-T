#include <stdio.h>

int main() {
    char ch;

    // Read a single character (leading space skips any whitespace)
    scanf(" %c", &ch);

    // Print the character
    printf("Character : %c\n", ch);

    // Print its ASCII code (same variable, printed as an integer)
    printf("ASCII code: %d\n", ch);

    // Print the next character (ASCII code + 1)
    printf("Next character : %c\n", ch + 1);

    return 0;
}