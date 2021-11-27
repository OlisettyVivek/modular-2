// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d,e,f,g,ch;
    printf("enter two variables a and b");
    scanf("%d%d",&a,&b);
    printf("enter operation \n1.addition \n2.difference \n3.multiplication \n4.division");
    scanf("%d",&ch);
    switch(ch)
    {case 1:c=a+b;
    printf("\nthe sum of %d and %d is %d",a,b,c);
    break;
     case 2:c=a-b;
     printf("\nthe difference of %d and %d is %d",a,b,c);
     break;  
     case 3:c=a*b;
     printf("\nthe product of %d and %d is %d",a,b,c);
     break;
     case 4:c=a/b;
     printf("\nthe division of %d and %d id %d",a,b,c);
     break; 
     default: printf("\n error");
    }
    return 0;
}
