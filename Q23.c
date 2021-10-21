#include <stdio.h>
int main()
{
    int days,year,week;
    printf("please enter the days \n");
    scanf("%d",&days);
    year=(days/365.0);
    week=(days%365)/7.0;
    days=days-((year*365)+week*7);
    
    printf("years %d \n",year);
    printf("weeks %d \n",week);
    printf("days %d \n", days);

    return 0;
}
