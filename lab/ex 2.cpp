#include<stdio.h>
int main()
{
	int a;
	printf ("Enter a number : " );
	scanf("%d",&a);
	
	if((a & 72) == 72 ) {
		printf("The 4th and 7th bits are on \n\n");
		a=a& ~ 72;
		printf("With 7th and bits off : %d \n");
	} else {
		printf("The 4th and 7th bits are both ON \n\n");
	}
}
