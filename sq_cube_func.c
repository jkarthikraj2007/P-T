#include <stdio.h>
int readInt(void)
{
    int n;
    scanf("%d", &n);
    return n;
}
int square(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}
void output(int sq, int cu)
{
    printf("Square of %d is %d\n", sq);
    printf("Cube of %d is %d\n", cu);
}