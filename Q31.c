#include <stdio.h>
#include <math.h>
int main()
{ 
    float a,b,c,d;
    printf("please enter the principal amount \n");
    scanf("%f",&a);
    printf("\nplease enter the time \n");
    scanf("%f",&b);
    printf("\nplease enter the rate \n");
    scanf("%f",&c);
    d=a*(pow((1.0+b/100.0),c));
    printf("the compound intrest is \n %f",d);
    return 0;
}
