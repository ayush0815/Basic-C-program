#include <stdio.h>
int main()
{
    float f,c;
    printf("please enter the temperature fahrenheit \n");
    scanf("%f",&f);
    c=(f-32.0)*5.0/9.0;
    printf("temperature in celcius is %f \n",c);

    return 0;
}
