#include <stdio.h>
int main()
{ 
    int x1,x2,y1,y2;
    float m;
    printf("please enter x1 \n");
    scanf("%d",&x1);
    printf("please enter y1 \n");
    scanf("%d",&y1);
    printf("please enter x2 \n");
    scanf("%d",&x2);
    printf("please enter y2 \n");
    scanf("%d",&y2);
    m=(y2-y1)/(x2-x1);
    printf("the slope of the line is \n %.2f",m);
    return 0;
}
