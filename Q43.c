#include <stdio.h>
#include <math.h>
int main()
{   
    int u=30,v,a=5,s=70,velocity;
    velocity=(u*u)+2*a*s;
    v=sqrt(velocity);
    printf("final velocity of the car is \n %dm/s",v);
    return 0;
}
