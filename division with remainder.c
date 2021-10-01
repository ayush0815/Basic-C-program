#include <stdio.h>

int main()
{
int x,y,qu,rem;
printf("enter the value of dividend,divisor");
scanf("%d%d",&x,&y);
qu=x/y;
rem=x%y;
printf("value of q is %d",qu);
printf("value of r is %d",rem);
}
