#include <stdio.h>
#include <stdlib.h>

float getAverage(int num1, int num2);
int displayLarge(int num1, int num2);
int checkEven(int num);
int getProduct(int num1, int num2);
float averageEven(int numbers[3]);

int main() {
    int choice;
    int num1, num2;
    int num, i;
    int numbers[3];
    int exitProgram = 0;

    do {
        printf("1. Get Average\n");
        printf("2. Display Large Number\n");
        printf("3. Check Even or Odd\n");
        printf("4. Product: Even or Odd?\n");
        printf("5. Average of All Even Numbers\n");
        printf("6. Ascending Order\n");
        printf("7. Average of Five\n");
        printf("8. Reverse Order\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                float average = getAverage(num1, num2);
                break;
            case 2:
                system("cls");
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                displayLarge(num1, num2);
                break;
            case 3:
                system("cls");
                printf("Enter a number: ");
                scanf("%d", &num);
                checkEven(num);
                break;
            case 4:
                system("cls");
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                getProduct(num1, num2);
                break;
            case 5:
                system("cls");
                printf("Enter three numbers: ");
                averageEven(numbers);
                break;
            case 9:
                exitProgram = 1;
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }

        if (choice >= 1 && choice <= 5 && choice != 9) {
            int continueChoice;
            printf("Do you want to continue? (1 for yes, 0 for no): ");
            scanf("%d", &continueChoice);

            if (continueChoice == 0) {
                exitProgram = 1; // Exit the program if the user chooses not to continue
            }
        }
    } while (!exitProgram);

    return 0;
}

float getAverage(int num1, int num2) {
    float sum;
    float average;

    sum = num1 + num2;
    average = sum / 2;
    printf("Average = %.2f\n", average);

    return average;
}

int displayLarge(int num1, int num2) {
    printf("Largest Number: ");
    if (num1 > num2) {
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }
    return num1 > num2 ? num1 : num2;
}

int checkEven(int num) {
    if (num % 2 == 0) {
        printf("This number is EVEN.\n");
    } else {
        printf("This number is ODD.\n");
    }
    return num % 2 == 0;
}

int getProduct(int num1, int num2) {
    int product = num1 * num2;
    if (product % 2 == 0) {
        printf ("Product = %d, EVEN\n", product);
    } else {
        printf("Product = %d, ODD\n", product);
    }

    return product;
}

float averageEven(int numbers[3]) {
    int i, sum_even = 0;
    int count = 0;
    for (i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            sum_even += numbers[i];
            count++;
        }
    }

    if (count > 0) {
        float average = (float)sum_even / count;
        printf("Average of all even numbers: %.2f\n", average);
    } else {
        printf("No even numbers inputted.\n");
    }

    return 0;
}

