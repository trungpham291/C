#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float) a / b;
}
int main5()
//int main()
{
    int a, b, choice;


    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nCalculation:\n");
    printf("===========================\n");
    printf("1. Calculate Sum\n");
    printf("2. Calculate Substraction\n");
    printf("3. Calculate Multiplication\n");
    printf("4. Calculate Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Sum: %d\n", add(a, b));
            break;
        case 2:
            printf("Subtraction result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Multiplication result: %d\n", multiply(a, b));
            break;
        case 4:
            if(b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Division result: %.2f\n", divide(a, b));
            }
            break;
        default:
            printf("Invalid choice. Please choose between 1 and 4.\n");
            break;
    }


    return 0;
}