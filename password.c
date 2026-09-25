#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%99s", password);   // reads a single token (no spaces)

    int len = strlen(password);

    for (int i = 0; i < len; i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = 1;
        } else if (ch >= 'a' && ch <= 'z') {
            hasLower = 1;
        } else if (ch >= '0' && ch <= '9') {
            hasDigit = 1;
        } else if (ch >= '!' && ch <= '/' ||   // covers !"#$%&'()*+,-./
                   ch >= ':' && ch <= '@' ||   // covers :;<=>?@
                   ch >= '[' && ch <= '`' ||   // covers [\]^_`
                   ch >= '{' && ch <= '~') {   // covers {|}~
            hasSpecial = 1;
        }
    }

    int hasMinLength = (len >= 8);

    printf("\n--- Password Check ---\n");
    printf("Minimum 8 characters : %s (length = %d)\n", hasMinLength ? "Yes" : "No", len);
    printf("Uppercase letter     : %s\n", hasUpper ? "Yes" : "No");
    printf("Lowercase letter     : %s\n", hasLower ? "Yes" : "No");
    printf("Digit                : %s\n", hasDigit ? "Yes" : "No");
    printf("Special character    : %s\n", hasSpecial ? "Yes" : "No");

    if (hasUpper && hasLower && hasDigit && hasSpecial && hasMinLength) {
        printf("\nResult: Password meets all criteria. VALID.\n");
    } else {
        printf("\nResult: Password does NOT meet all criteria. INVALID.\n");
    }

    return 0;
}