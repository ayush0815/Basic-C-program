#include <stdio.h>
#include <math.h>
int main()
{   
    int a, c=03*pow(10,8),f;
    printf("please enter the wavelength in metre \n");
    scanf("%d",&a);
    f=c/a;
    printf("frequency of wave is \n %dHz",f);
    return 0;
}
