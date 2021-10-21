#include <stdio.h>
int main()
{ 
    int a,b,c;
    printf("please enter the date \n");
    scanf("%d%*c%d%*c%d",&a,&b,&c);
    printf("the date is %d/%d/%d",a,b,c);
    return 0;
}
