#include<stdio.h>
void add();
void sub();
void mul();
void div();
void main()
{
    add();
    sub();
    mul();
    div();
}
 void add()
{  int a,b;
  printf("the addition of two numbers is:");
  scanf("%d%d",&a,&b);
  printf("the sum is %d", a+b);
}

void sub()
{ int a,b;
 printf("\nthe subtraction of two numbers is:");
 scanf("%d%d",&a,&b);
 printf("the difference is %d", a-b);
 }

void mul()
{int a,b;
 printf("\nthe multiplication of two numbers is:");
 scanf("%d%d",&a,&b);
 printf("the multiplication is %d", a*b);
}

void div()
{float a,b;
printf("\nthe division of two numbers is:");
scanf("%d%d",&a,&b);
printf("the division is %d", a/b);
}



 
 