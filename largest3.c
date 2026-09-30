#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("a is greatest");
    }
    else if(b>a && b>c)
    {
        printf("b is greatest");
    }
    else if(c>b && c>a)
    {
        printf("c is greatest");
    }
    else 
    {
        printf("all are equal");
    }
    return 0;
}