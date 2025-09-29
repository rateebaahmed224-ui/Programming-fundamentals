#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch >='a' && ch<='z') {
		printf("%c is a small alphabet",ch);
	}
	else if(ch>='A' && ch<='Z') {
		printf("Your character is a Capital alphabet");
	}
	else if(ch>='0' && ch<='9') {
		printf("Your character is a number");
	}
	else { printf("Your input is a special character");
	}
	return 0;
}
