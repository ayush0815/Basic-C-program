#include <stdio.h>
int main()
{
float A,B,H,Area;
printf("Enter base of trapazium\n");
scanf("%f",&A);
printf("Enter side opposite to base of trapazium\n");
scanf("%f",&B);
printf("enter the height of trapazium\n");
scanf("%f",&H);
Area=1.0/2.0*(A+B)*H;
printf("the area of trapazium is\n %4.2f",Area);    

    return 0;
}
