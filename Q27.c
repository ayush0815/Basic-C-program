#include <stdio.h>
int main()
{
    int x,y,z;
    printf("please enter the base of the triangle\n");
    scanf("%d",&x);
    printf("please enter the height of the triangle\n");
    scanf("%d",&y);
    z=1.0/2.0*(x*y);
    printf("the third area of the triangle is \n %d",z);
    return 0;
}
