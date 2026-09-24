#include<stdio.h>
double doseforplot(double areha, double rateperha)
{
    scanf("%lf %lf", &areha, &rateperha);
    return areha * rateperha;
}
double bagsneeded(double quantitykg, double bagsizekg)
{
    scanf("%lf %lf", &quantitykg, &bagsizekg);
    return quantitykg / bagsizekg;
}
