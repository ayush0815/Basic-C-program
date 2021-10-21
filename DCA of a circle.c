#include <stdio.h>
int main()
{
float r,d,c,a;
printf("Enter the radius of the circle\n");
scanf("%f",&r);
d=2.0*r;
c=2*22.0/7.0*r;
a=22.0/7.0*r*r;
printf("The diameter of circle is \n %4.2f",d);
printf("\nThe circumfence of circle is \n %4.2f",c);
printf("\nThe area of circle is \n %4.2f",a);

    return 0;
}
