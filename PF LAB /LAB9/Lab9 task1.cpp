#include<stdio.h>//CT-25173
int main(){
	int y=5;
	int *yptr;
	yptr=&y;
	printf("%d", *yptr);
}