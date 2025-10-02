#include<stdio.h>
int main()
{
	int i,j,limit;
	i=1;
	limit=5;
	while(i<=limit){
		j=1;
		while(j<=i){
			printf("*");
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}