#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;

    printf("Enter three Marks: \n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3.0;

    printf("Average Marks of %d, %d and %d is: %.2f\n", a, b, c, avg);
    return 0;
}