#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements of array a: ");
    scanf("%d",&n);
int a[n];
printf("Enter %d elements of array a: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
printf("Elements of array a are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}