#include<stdio.h>
int main()

{
    int i = 10;
    int j = 1;
    for(int i=0;i<10;i++)
	
	{
        
        printf("10x%d = %d\n",i,10*i);
        printf("9x%d = %d\n",j,9*j);

        i--;
        j++;
    }
    
    return 0;
}