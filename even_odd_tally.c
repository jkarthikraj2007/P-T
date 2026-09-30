#include <stdio.h>

int main() {
    int n, i, num;
    int evenCount = 0, evenSum = 0;
    int oddCount = 0, oddSum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
            evenSum += num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }

    printf("Even count = %d, Even sum = %d\n", evenCount, evenSum);
    printf("Odd count = %d, Odd sum = %d\n", oddCount, oddSum);

    return 0;
}