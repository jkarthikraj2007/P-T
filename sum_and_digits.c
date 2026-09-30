#include <stdio.h>

int readInt(void);
int digitSum(int n);
void output(int n, int sum);

int main() {
    int n = readInt();
    int sum = digitSum(n);
    output(n, sum);
    return 0;
}

// reads one integer from input and returns it
int readInt(void) {
    int n;
    scanf("%d", &n);
    return n;
}

// returns the sum of the digits of n (sign ignored)
int digitSum(int n) {
    long long m = n;        // wider type so -n cannot overflow
    int sum = 0;

    if (m < 0) {
        m = -m;             // work on the absolute value
    }

    while (m > 0) {
        sum += m % 10;      // add the last digit
        m /= 10;            // drop the last digit
    }

    return sum;
}

// prints the result line
void output(int n, int sum) {
    printf("Sum of digits of %d = %d\n", n, sum);
}