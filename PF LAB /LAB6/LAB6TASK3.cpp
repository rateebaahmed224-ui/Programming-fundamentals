#include<stdio.h>
int main ()
{
	float denominator = 4;
	float sum = 1;
	
	while(denominator<=400) {
	sum = sum+ (1/denominator);
	denominator = denominator + 4;
	}
	printf ("%f",sum);
	
	return 0;
}