#include <stdio.h>
int main() 
{
	int sec,h,m,s;
	printf("enter number of seconds \n");
	scanf("%d",&sec);
	h=(sec/3600.0);
	m=(sec-(3600.0*h))/60.0;
	s=(sec-(3600.0*h)-(m*60.0));
	printf("the number of hour(s) is \n%d Hour(s)",h);
    printf("\nthe number of minute(s) is \n%d Minute(s)",m);
    printf("\nthe number of second(s) is \n%d second(s)",s);
	
	return 0;
}
