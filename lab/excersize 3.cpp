#include<stdio.h>
int main()
{
	int sp,cp,s;
	printf("Enter your total amount : ");
	scanf ("%d",&cp);
	if (cp>=2000 && cp<=4000)
	{
		s= cp*0.20;
		printf("\n\nYour amount is : %d",cp);
		printf("\n\nYour total discount is : %d ",s);
		sp=cp-s;
		printf("\n\nYour amount after discount is : %d",sp);
    }
    else if (cp>=4001 && cp<=6000) {
    	s= cp*0.30;
		printf("\n\nYour amount is : %d",cp);
		printf("\n\nYour total discount is : %d ",s);
		sp=cp-s;
		printf("\n\nYour amount after discount is : %d",sp);
	}
	else if (cp>6000) 
	{
    	s= cp*0.50;
		printf("\n\nYour amount is : %d",cp);
		printf("\n\nYour total discount is : %d ",s);
		sp=cp-s;
		printf("\n\nYour amount after discount is : %d",sp);
}
}
