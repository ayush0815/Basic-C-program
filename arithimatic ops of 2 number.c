#include <stdio.h>
int main()
{
float R,P,A,S,M,D;
printf("Enter first number\n");
scanf("%f",&R);
printf("Enter second number\n");
scanf("%f",&P);
A=R+P;
S=R-P;
M=R*P;
D=R/P;
printf("the sum of two numbers is\n %4.3f",A);    
printf("\nthe difference of two numbers is\n %4.3f",S);
printf("\nthe product of two numbers is\n %4.3f",M);
printf("\nthe division of two numbers is\n %4.3f",D);

    return 0;
}
