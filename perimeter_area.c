#include <stdio.h>
int main()
{
 int area, perimeter;
 int l,b;

 printf("Enter the Length of Rectangle\n");
 scanf("%d",&l);
 printf("Enter the Breadth of Rectangle\n");
 scanf("%d",&b);

 area=l*b;
 perimeter=2*(l+b);
 
 printf("Area of Rectangle is %d\n",area);
 printf("Perimeter of Rectangle is %d\n",perimeter);
 return 0;
}