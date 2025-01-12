#include <stdio.h>
#include <stdlib.h>

int main() {
    int first_number;
    int second_number;
    int sum;
    char operator;
    
    printf("Enter first number: ");
    scanf("%d", &first_number);
    
    printf("Enter second number: ");
    scanf("%d", &second_number);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            sum = first_number + second_number;
            printf("Sum: %d\n", sum);
            break;
        case '-':
            sum = first_number - second_number;
            printf("Sum: %d\n", sum);
            break;
        case '*':
            sum = first_number * second_number;
            printf("Sum: %d\n", sum);
            break;
        case '/':
            if (second_number != 0) {
                sum = first_number / second_number;
                printf("Sum: %d\n", sum);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
