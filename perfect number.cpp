#include<stdio.h>
int main()
{
	int n,i,rem,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{ rem=n%i;
	if(rem==0)
	sum+=i;
	}
if(sum==n)
printf("%d is a perfect number",n);
else
printf("%d is not a perfect number",n);
}
