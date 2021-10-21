#include <stdio.h>
int main()
{ 
    float a,b,c,d,e,t,avg,p;
    printf("please enter the marks of first subject \n");
    scanf("%f",&a);
    printf("\nplease enter the marks of second subject \n");
    scanf("%f",&b);
    printf("\nplease enter the marks of third subject \n");
    scanf("%f",&c);
    printf("\nplease enter the marks of fourth subject \n");
    scanf("%f",&d);
    printf("\nplease enter the marks of fifth subject \n");
    scanf("%f",&e);
    t=a+b+c+d+e;
    avg=t/5.0;
    p=(t/500.0)*100.0;
    printf("the total marks obtained are \n %f",t);
    printf("\naverage marks obtained is \n %f",avg);
    printf("\npercentage obtained is \n %f",p);
    return 0;
}
