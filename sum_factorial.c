#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;
    long long fact = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
        fact *= i;
    }

    printf("Sum of first %d numbers = %lld\n", n, sum);
    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}