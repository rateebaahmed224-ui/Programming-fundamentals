#include<stdio.h>
int main()
{
    int den=4;
    float sum=1.0;
    printf("S=1+");
    while(den<=400){
        sum+=1.0/den;
        printf("1/%d",den);
        
        if(den<400){
        printf(" + ");
        }
        den+=4;
    }
    printf("\nSum=%.4f\n ",sum);

    return 0;
}