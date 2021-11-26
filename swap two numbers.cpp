#include<stdio.h>
int main()
{
int a,b;
printf("enter value a");
scanf("%d",&a);
printf("enter value b");
scanf("%d",&b);
int z=a;
a=b;
b=z;
printf("\nafter swapping number: a=%d,b=%d",a,b);
return 0;
}
  
