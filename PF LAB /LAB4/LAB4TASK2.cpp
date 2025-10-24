#include<stdio.h>
int main()
{
    int age1;
    printf("Enter age of Rateeba : ");
    scanf("%d",&age1);
    
    int age2;
    printf("\nEnter age of Fatima : ");
    scanf("%d",&age2);
    
    int age3;
    printf("\nEnter age of Ahmed : ");
    scanf("%d",&age3);

    if(age1<age3 && age1<age2 )
	{
        printf("Rateeba is youngest");
    }else if(age2<age3 && age2<age1 )
	{
        printf("Fatima is youngest");
    }else if(age3<age2 && age3<age1 )
	{
        printf("Ahmed is youngest");
    }
        return 0;}