//area and perimeter of a rectangle
#include<stdio.h>
int main()
{
	int l,b,a,p;
	printf("enter l");
	scanf("%d",&l);
	printf("enter b");
	scanf("%d",&b);
	a=l*b;
	printf("a=%d",a);
	p=2*(l+b);
	printf("p=%d",p);
	return 0;
	
}
