#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkPalindrome(char str[], int n, int i)
{
    // Base case: if we've checked past the middle, it's a palindrome
    if (i >= n / 2) {
        return true;
    }

    // If characters at mirrored positions don't match, not a palindrome
    if (str[i] != str[n - 1 - i]) {
        return false;
    }

    // Recurse inward, moving i forward
    return checkPalindrome(str, n, i + 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int n = strlen(str);

    if (checkPalindrome(str, n, 0)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}