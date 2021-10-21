#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,S,A;
printf("enter length of three sides of triangle\n");
scanf("%f%f%f",&a,&b,&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
printf("The area of triangle by heron's fourmula is %f",A);
return 0;
}