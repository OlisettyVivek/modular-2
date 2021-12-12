//calculating average of 5 subject marks
#include<stdio.h>
int main()
{
	int a,b,c,d,e,t;
	float avg,per;
	printf("enter marks of subject a");
	scanf("%d",&a);
	printf("enter marks of subject b");
	scanf("%d",&b);
	printf("enter marks of subject c");
	scanf("%d",&c);
	printf("enter marks of subject d");
	scanf("%d",&d);
	printf("enter marks of subject e");
	scanf("%d",&e);
    t=a+b+c+d+e;
    printf("total of marks of 5 subjects = %d\n",t);
    avg=t/5;
    printf("average of 5 subjects = %d\n",avg);
    per=t/500*100;
	printf("percentage of the student is %f",per);
	return 0;
}
