#include <stdio.h>

// returns 1 if x is prime, 0 otherwise
int isPrime(int x) {
    int i;
    int prime = 1;

    if (x < 2) {
        return 0;               // 0, 1 and negatives are not prime
    }

    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            prime = 0;          // found a divisor
            break;              // no need to check further
        }
    }

    return prime;
}

int main() {
    int n, x;

    scanf("%d", &n);

    // Line 1: is N itself prime?
    if (isPrime(n)) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    // Line 2: every prime from 2 up to N
    printf("Primes up to %d:", n);
    for (x = 2; x <= n; x++) {
        if (isPrime(x)) {
            printf(" %d", x);
        }
    }
    printf("\n");

    return 0;
}