#include <stdio.h>

int main() {
    int marks;

    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("INVALID\n");
    } else if (marks >= 90) {
        printf("Grade S\n");
    } else if (marks >= 80) {
        printf("Grade A\n");
    } else if (marks >= 70) {
        printf("Grade B\n");
    } else if (marks >= 40) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}