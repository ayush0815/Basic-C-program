#include <stdio.h>
int main()
{
int A,B;
printf("enter value of a\n");
scanf("%d",&A);
printf("enter value of b\n");
scanf("%d",&B);
A=A+B;
B=A-B;
A=A-B;
printf("the value of a after swapping is %d",A);
printf("\nthe value of b after swapping is %d",B);
return 0;
}
