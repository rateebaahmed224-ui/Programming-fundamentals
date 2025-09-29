#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   
    int last = num % 10;
    int rest = num / 10;
    int result = rest - (2 * last);

    if (result == 0 || result == 7 || result == -7) {
        printf("%d is divisible by 7\n", num);
    }
    else {
      
        int last2 = result % 10;
        int rest2 = result / 10;
        int result2 = rest2 - (2 * last2);

        if (result2 == 0 || result2 == 7 || result2 == -7) {
            printf("%d is divisible by 7\n", num);
        }
        else {
            
            int last3 = result2 % 10;
            int rest3 = result2 / 10;
            int result3 = rest3 - (2 * last3);

            if (result3 == 0 || result3 == 7 || result3 == -7) {
                printf("%d is divisible by 7\n", num);
            }
            else {
               
                int last4 = result3 % 10;
                int rest4 = result3 / 10;
                int result4 = rest4 - (2 * last4);

                if (result4 == 0 || result4 == 7 || result4 == -7) {
                    printf("%d is divisible by 7\n", num);
                }
                 {
                    printf("%d is NOT divisible by 7\n", num);
                }
            }
        }
    }

    return 0;
}
