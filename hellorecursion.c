#include <stdio.h>
void sayHello(int n) {
    if (n <= 0) {
        return; // Base case: stop recursion when n is 0 or negative
    }
    printf("Hello, World!\n");
    sayHello(n - 1); // Recursive call with decremented n
}
int main() {
    int n;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);
    sayHello(n);
    return 0;
}