#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char str1[], char str2[])
{
    int count[256] = {0};   // one slot for every possible ASCII character

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Different lengths can never be anagrams
    if (len1 != len2) {
        return false;
    }

    // Increment count for each character in str1
    for (int i = 0; i < len1; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Decrement count for each character in str2
    for (int i = 0; i < len2; i++) {
        count[(unsigned char)str2[i]]--;
    }

    // If it's a true anagram, every count should be back to 0
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (isAnagram(str1, str2)) {
        printf("\"%s\" and \"%s\" ARE anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}  