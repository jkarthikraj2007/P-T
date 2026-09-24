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

    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int min=a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMaximum element of array a is: %d",max);
    printf("\nMinimum element of array a is: %d",min);

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    float avg=0;
    avg=sum/n;
    printf("\nSum of elements of array a is: %d",sum);
    printf("\nAverage of elements of array a is: %.2f",avg);
    return 0;
}