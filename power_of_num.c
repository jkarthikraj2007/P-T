#include <stdio.h>

int readInt(void);
int power(int base, int exp);
void output(int base, int exp, int result);

int main() {
    int base = readInt();   // first number
    int exp = readInt();    // second number
    int result = power(base, exp);
    output(base, exp, result);
    return 0;
}

// reads one integer from input and returns it
int readInt(void) {
    int n;
    scanf("%d", &n);
    return n;
}

// returns base raised to exp, using a loop
int power(int base, int exp) {
    int result = 1;
    int i;

    for (i = 1; i <= exp; i++) {
        result *= base;
    }

    return result;
}

// prints the result line
void output(int base, int exp, int result) {
    printf("%d raised to %d = %d\n", base, exp, result);
}