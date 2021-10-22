#include <stdio.h>
int main() 
{
	int n,y,m,d;	
	
	printf("enter number of days: ");
	scanf("%d", &n);
	
	y=n/365;
	n=n-(365*y);
    m=n/30;
	d=n-(m*30);
	printf("the number of year(s) is \n%d Year(s)",y);
	printf("\nthe number of month(s) is \n%d Month(s)",m);
	printf("\nthe number of days(s) is \n%d day(s)",d);
	
	return 0;
}
