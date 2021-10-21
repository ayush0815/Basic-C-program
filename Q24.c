#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,a;
    printf("please enter the number \n");
    scanf("%d",&x);
    printf("please enter the power \n");
    scanf("%d",&y);
    a=pow(x,y);
    printf("the answer is\n %d",a);
    return 0;
}
