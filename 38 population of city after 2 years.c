
#include <stdio.h>

int main()
{
int P,r1,r2,P2;
printf("enter population of city\n");
scanf("%d",&P);
printf("enter growth rate of first year in percent\n");
scanf("%d",&r1);
printf("enter growth rate of second year in percent\n");
scanf("%d",&r2);
P2=P*(1.00+r1/100.00)*(1.00+r2/100.00);
printf("the popolation of city after two year is %d",P2);
return 0;
}
