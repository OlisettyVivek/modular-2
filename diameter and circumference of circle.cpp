//diameter and circumference of circle
#include<stdio.h>
int main ()
{
	int r,d;
	float c;
	printf("enter the radius");
	scanf("%d",&r);
	d=2*r;
	/*print the diameter*/
	printf("d=%d",d);
	c=2*3.14*r;
	printf("c=%f",c);
	return 0;
	
}
