#include <stdio.h>
int main()
{ 
    float c,f;
    printf("please enter the temperature in celcius \n");
    scanf("%f",&c);
    f=c*(9.0/5.0)+32.0;
    printf("temperature in fahrenheit is \n %f",f);
    return 0;
}
