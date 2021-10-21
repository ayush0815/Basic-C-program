#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    printf("please enter the first angle of the triangle\n");
    scanf("%d",&x);
    printf("please enter the second angle of the triangle\n");
    scanf("%d",&y);
    z=180.0-(x+y);
    printf("the third angle of the triangle is \n %d",z);
    return 0;
}
