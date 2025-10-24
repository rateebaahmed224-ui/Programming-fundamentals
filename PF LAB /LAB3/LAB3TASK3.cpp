#include <stdio.h> //PROGRAM TO SWAP NUMBERS  A AND B

int main() {
    int a, b, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    x = a;
    a = b;
    b = x;
    printf("swap :  a = %d, b = %d\n", a, b);

    return 0;
}