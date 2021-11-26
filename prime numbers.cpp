#include<stdio.h>
int main()
{ int a;
printf("enter the number");
scanf("%d",&a);
if(a%2==1)
printf("\n %d is a prime number",a);
else 
printf("\n %d is a composite number",a);
return 0;
}
