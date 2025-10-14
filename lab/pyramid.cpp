#include<stdio.h>
int main()

{
	
	for(int i=1;i<=5;i++)
	{
	//for spaces	
		for (int space=i; space<5;space++)
		{
			printf (" ");
		}
		//for stars
		for(int j=1;j<=(2*i-1);j++){
			
		printf("*");
		
		}
		printf("\n");
	}
	return 0;
}