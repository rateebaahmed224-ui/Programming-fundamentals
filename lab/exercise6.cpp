#include <stdio.h>

int main() {
    float cal, fatg, caloriesFromFat, percent;

    printf("Enter the number of calories: ");
    scanf("%f", &cal);

    printf("Enter the number of fat grams: ");
    scanf("%f", &fatg);

    if (cal >= 0) {
        if (fatg >= 0) {
            caloriesFromFat = fatg * 9;

            if (caloriesFromFat <= cal) {
                percent = (caloriesFromFat / cal) * 100;

                printf("Percentage of calories from fat: %.2f%%\n", percent);

                if (percent < 30) {
                    printf("This food is low in fat.\n");
                } else {
                    printf("This food is not low in fat.\n");
                }

            } else {
                printf("Error: Calories from fat cannot be greater than total calories.\n");
            }

        } else {
            printf("Error: Fat grams cannot be negative.\n");
        }
    } else {
        printf("Error: Calories cannot be negative.\n");
    }

    return 0;
}
