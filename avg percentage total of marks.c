
#include <stdio.h>

int main()
{
int M,P,C,A,T,Per;
printf("enter the number of Maths\n");
scanf("%d",&M);
printf("enter the number of Physics\n");
scanf("%d",&P);
printf("enter the number of Chemistry\n");
scanf("%d",&C);
T=M+P+C;
A=(M+P+C)/3;
Per=T*100.0/300.0;
printf("the total is %d\n",T);
printf("the average is %d\n",A);
printf("percentage is %d\n",Per);
return 0;
}
