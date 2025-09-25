#include<stdio.h>
int main()
{
	int dept,subdept;
	printf(" \nChoose your department(1 for CS and 2 for EE) : \n");
	scanf("%d",&dept);
	switch(dept){
	
	case 1 :printf("Your department is CS . \n\n ");
	
	printf("Choose yout subdepartment : \n\n 1.AI \n\n2.Cybersecurity \n\n 3.Datascience \n\n 4.Gaming and Animation\n\n");	
	scanf ("%d",&subdept);
	
	switch(subdept) {
	
	case 1 :
	printf("Your specialisation is AI ");
	break;
	case 2 :
	printf("Your specialisation is  Cyber security ");
	break;
	case 3 :
	printf("Your specialisation is Datascience ");
	break;
	case 4 :
	printf("Your specialisation is  gaming and animation ");
	break;
	default : printf("Invalid");
	break ;
	}
	break;
	case 2 : printf("Your department is EE ");
	break;
	default : printf("Invalid input ");
}
}

	

