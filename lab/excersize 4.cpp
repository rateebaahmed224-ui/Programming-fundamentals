//Quadratic Equation Exercise
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
	printf ("Enter value for a : ");
	scanf("%d",&a);
	
	printf ("Enter value for b : ");
	scanf("%d",&b);
	
	printf ("Enter value for c : ");
	scanf ("%d",&c);
	
	float  r1= (-b+sqrt((b*b)-4*a*c))/ (2*a);
	float  r2= (-b-sqrt((b*b)-4*a*c))/ (2*a);
	printf("The roots of equation are : %f and %f",r1,r2);
}