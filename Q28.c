#include <stdio.h>
#include <math.h>
int main()
{ 
    int a;
    float f;
    printf("please enter the side of equilateral triangle \n");
    scanf("%d",&a);
    f=(sqrt(3.0)/4.0)*(a*a);
    printf("area of triangle is \n %f",f);
    return 0;
}
