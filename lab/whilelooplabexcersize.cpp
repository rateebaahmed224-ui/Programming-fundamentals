#include<stdio.h>
int main()
{
	int pat= 4 ;
	float sum =1;
	while(pat<=400) {
		sum = sum+(1/pat);
		pat=pat+ 4;
	}
	printf("%f",sum);
}