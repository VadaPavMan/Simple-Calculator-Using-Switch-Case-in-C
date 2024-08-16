#include <stdio.h>

int main()
{
    printf("Simple Calculator\n");
    double a, b, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Enter operator you want to use(+, -, *, / ): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = a + b;
        printf("Final output is: %.2lf", result);
        break;
    case '-':
        result = a - b;
        printf("Final output is: %.2lf", result);
        break;
    case '*':
        result = a * b;
        printf("Final output is: %.2lf", result);
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
            printf("Final output is: %.2lf", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    return 0;
}
