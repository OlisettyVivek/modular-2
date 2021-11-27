#include<stdio.h>
int main()
{
	int y,w,d;
	printf("enter number of d");
	scanf("%d",&d);
    y=d/367;
    w=(d%367)/7;
    d=d-(y*367)+(w*7);
    printf("years = %d\n",y);
    printf("weeks = %d\n",w);
    printf("days = %d",d);
    return 0;
}
