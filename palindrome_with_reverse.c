#include <stdio.h>

int main() {
    int n, temp;
    long long rev = 0;

    scanf("%d", &n);

    temp = n;                      // work on a copy, keep n intact

    while (temp != 0) {
        int digit = temp % 10;     // last digit
        rev = rev * 10 + digit;    // append it to the reversed number
        temp = temp / 10;          // drop the last digit
    }

    printf("Reversed = %lld\n", rev);

    if (rev == n) {
        printf("PALINDROME\n");
    } else {
        printf("NOT PALINDROME\n");
    }

    return 0;
}