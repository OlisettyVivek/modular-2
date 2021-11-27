#include<stdio.h>
int main()
{
float cm,m,km;
printf("enter the value of centimeters");
scanf("%f",&cm);
m=cm/100;
km=cm/100000;
printf("meters to centimeter= %lf\n",m);
printf("kilometer to centimeter= %lf",km);
return 0;
}
