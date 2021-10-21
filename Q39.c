#include <stdio.h>
int main()
{ 
    float a,b,c,t;
    printf("please enter the basic pay \n");
    scanf("%f",&a);
    b=(a/100.0)*15.0;
    c=(a/100.0)*20.0;
    t=a+b+c;
    printf("the total salary is \n %.2f",t);
    return 0;
}
