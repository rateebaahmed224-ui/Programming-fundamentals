#include <stdio.h>

int main() 
{
    int n, i;
    int marks[6];
    int sum = 0;
    float average;

    printf("Enter number of students (max 6): ");
    scanf("%d", &n);
  
    for(i = 0; i < n; i++) 
	{
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = (float)sum / n;

    printf("\nAverage marks = %.2f\n", average);

    return 0;
}
