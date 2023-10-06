#include <stdio.h>
int performOperation(int num1, int num2, char choice);
int performOperation(int num1,int num2, char choice){
    int result;
    switch(choice){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Khong phu hop\n");
            result = 0;

    }
    return result;
}

int main()
{
    int num1, num2;
    char choice;
    printf("Enter frist number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &choice);
    printf("Enter second number: ");
    scanf(" %d", &num2);

    int result = performOperation(num1, num2, choice);
    printf("Result : %d", result);
}