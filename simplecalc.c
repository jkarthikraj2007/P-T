#include <stdio.h>

int main() {
    double a, b;
    char op;

    scanf("%lf %lf", &a, &b);
    scanf(" %c", &op);   // leading space skips whitespace/newline

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        case '-':
            printf("Result = %.2f\n", a - b);
            break;
        case '*':
            printf("Result = %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("DIVIDE BY ZERO\n");
            } else {
                printf("Result = %.2f\n", a / b);
            }
            break;
        default:
            printf("INVALID OPERATOR\n");
    }

    return 0;
}