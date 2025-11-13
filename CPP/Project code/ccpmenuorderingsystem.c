#include <stdio.h>
#include <string.h>

int main()
{
    int drinkChoice, sizeChoice, sweetChoice, tempChoice;
    float total, tax, finalTotal;
    float tempPrice = 0;
    const float TAX_RATE = 0.10; // 10% tax

    // Arrays for menu items and prices
    char drinks[4][40] = {"Spanish Latte", "Iced Brown Sugar Espresso", "Tiramisu Latte", "Strawberry Matcha"};
    float drinkPrices[4] = {600, 750, 900, 750};

    char sizes[3][10] = {"Small", "Medium", "Large"};
    float sizePrices[3] = {0, 250, 350};

    char sweets[4][40] = {"Lemon Tart", "Chocolate Chip Cookie", "Almond Croissant", "No Sweet"};
    float sweetPrices[4] = {300, 250, 400, 0};

    printf("===========================\n");
    printf("      Welcome to Cafe\n");
    printf("===========================\n\n");

    // Drink selection
    printf("Available Drinks:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s (Rs. %.2f)\n", i + 1, drinks[i], drinkPrices[i]);
    }
    
    printf("Enter your drink choice (1-4): ");
    scanf("%d", &drinkChoice);

    if (drinkChoice < 1 || drinkChoice > 4) // OR Bitwise operator
    {
        printf("Invalid choice! Defaulting to Spanish Latte.\n");
        drinkChoice = 1;
    }
    
    printf("\nWould you like it:\n"); // hot or cold drink
	printf("1. Hot (+Rs. 0)\n");
	printf("2. Iced (+Rs. 150)\n");
	printf("Enter your choice (1-2): ");
	scanf("%d", &tempChoice);
	
	if (tempChoice == 1)
	{
        tempPrice = 0;
	}
	else if (tempChoice == 2)
	{
        tempPrice = 150; // +Rs.150 added for iced drink 
	}
	else
	{
	    printf("Invalid choice! Defaulting to Hot.\n");
        tempChoice = 1;
        tempPrice = 0;
	}

    // Size selection
    printf("\nChoose Size:\n");
    for (int i = 0; i < 3; i++)
        printf("%d. %s (+Rs. %.2f)\n", i + 1, sizes[i], sizePrices[i]);
    printf("Enter your choice (1-3): ");
    scanf("%d", &sizeChoice);

    if (sizeChoice < 1 || sizeChoice > 3)
    {
        printf("Invalid choice! Defaulting to Small.\n");
        sizeChoice = 1;
    }

    // Sweet selection
    printf("\nAdd a Sweet:\n");
    for (int i = 0; i < 4; i++)
        printf("%d. %s (+Rs. %.2f)\n", i + 1, sweets[i], sweetPrices[i]);
    printf("Enter your choice (1-4): ");
    scanf("%d", &sweetChoice);

    if (sweetChoice < 1 || sweetChoice > 4)
    {
        printf("Invalid choice! No sweet added.\n");
        sweetChoice = 4;
    }

    // Calculate prices
    float drinkPrice = drinkPrices[drinkChoice - 1]; // -1 here because arrays start with 0
    float sizePrice = sizePrices[sizeChoice - 1];
    float sweetPrice = sweetPrices[sweetChoice - 1];

    total = drinkPrice + sizePrice + sweetPrice + tempPrice;
    tax = total * TAX_RATE;
    finalTotal = total + tax;

    // Display summary
    printf("\n====================================\n");
    printf("            ORDER SUMMARY\n");
    printf("====================================\n");
    printf("Drink:          %s (Rs. %.2f)\n", drinks[drinkChoice - 1], drinkPrice);
    printf("Size:           %s (+Rs. %.2f)\n", sizes[sizeChoice - 1], sizePrice);
    printf("Sweet:          %s (+Rs. %.2f)\n", sweets[sweetChoice - 1], sweetPrice);
    printf("Temperature:     %s (+Rs. %.2f)\n", (tempChoice == 2) ? "Iced" : "Hot", tempPrice); 
    printf("------------------------------------\n");
    printf("Subtotal:       Rs. %.2f\n", total); // Before tax
    printf("Tax (10%):      Rs. %.2f\n", tax);
    printf("------------------------------------\n");
    printf("Total Bill:     Rs. %.2f\n", finalTotal);
    printf("====================================\n");
    printf("Thank you! Your order has been received.\n");
    printf("Enjoy your drink!\n");
    printf("====================================\n");

    return 0;
}