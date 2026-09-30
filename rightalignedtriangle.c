#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // leading spaces: N - i of them
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars: i of them
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}