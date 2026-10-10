#include <stdio.h>
int main()
{
    char operator;
    double number, result;
    int first_input = 1;
    printf("\n---- CodeAlpha_Calculator ----\n");
    printf("Select an operator (+, -, *, /) or press 'Q' to quit: ");
    scanf(" %c", &operator);

    if (operator=='Q' || operator=='q')
    {
        printf("Calculator closed.\n");
        return 0;
    }
    if (operator != '+' && operator != '-' &&
        operator != '*' && operator != '/')
    {
        printf("Error: Invalid operator!\n");
        return 0;
    }
    printf("\nEnter numbers one by one.");
    printf("\nEnter 0 to stop and view the result.\n\n");
    while (1)
    {
        printf("Enter number: ");

        if (scanf("%lf", &number) != 1)
        {
            printf("Error: Invalid number input!\n");
            return 1;
        }
       if (number == 0)
        {
            if (first_input)
            {
                printf("Error: No number entered!\n");
                return 0;
            }
            break;
        }
        if (first_input)
        {
            result = number;
            first_input = 0;
            continue;
        }
        switch (operator)
        {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                result /= number;
                break;
        }
    }

    printf("\n--------------------------------\n");
    printf("Your Final Result = %.2lf\n", result);
    printf("--------------------------------\n");

    return 0;
}