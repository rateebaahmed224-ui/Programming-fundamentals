#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter two numbers : ");
   scanf("%d %d",&a,&b);

   int maxno = (a>b)?a:b;
    printf("Maximum is %d\n",maxno);
    return 0;
}