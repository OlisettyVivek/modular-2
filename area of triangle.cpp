#include<stdio.h>
int main()
{
	int b,h; float a;
	printf("enter the value of base");
	scanf("%d",&b);
	printf("enter the value of height");
	scanf("%d",&h);
	a=b*h*0.5;
	printf("the area of triangle is %f",a);
	return 0;
}
