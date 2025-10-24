#include<stdio.h>
int main(){
    int hrs;
    float d1,d2,d3,d4,d5,totalDistance,avSpeed;

    printf("Enter the number of hours car travelled : ");
    scanf("%d",&hrs);

    printf("Enter distance in  hour 1 : ");
    scanf("%f",&d1);

    printf("Enter distance in  hour 2 : ");
    scanf("%f",&d2);

    printf("Enter distance in  hour 3 : ");
    scanf("%f",&d3);

    printf("Enter distance in  hour 4 : ");
    scanf("%f",&d4);

    printf("Enter distance in  hour 5: ");
    scanf("%f",&d5);

    totalDistance=d1+d2+d3+d4+d5;
    avSpeed=totalDistance/hrs;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",avSpeed);

    return 0;
}