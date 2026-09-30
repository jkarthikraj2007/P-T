#include <stdio.h>

int main() {
    long long n;
    int count = 0, sum = 0;

    scanf("%lld", &n);

    if (n < 0) {
        n = -n;                 // work on the absolute value
    }

    do {
        sum += n % 10;          // add the last digit
        count++;                // one more digit
        n /= 10;                // drop the last digit
    } while (n > 0);

    printf("Digit count = %d\n", count);
    printf("Digit sum = %d\n", sum);

    return 0;
}