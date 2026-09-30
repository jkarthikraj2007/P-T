#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // leading spaces: N - i of them
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // count up: 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // count down: i-1 to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}