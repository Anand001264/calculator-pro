#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;
    int choice;

    while(1)
    {
        printf("\n===== MY CALCULATOR =====\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5)
        {
            printf("Thank you for using calculator!\n");
            break;
        }

        if(choice < 1 || choice > 4)
        {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        switch(choice)
        {
            case 1:
                printf("Result = %.2f\n", add(a, b));
                break;

            case 2:
                printf("Result = %.2f\n", subtract(a, b));
                break;

            case 3:
                printf("Result = %.2f\n", multiply(a, b));
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f\n", divide(a, b));
                else
                    printf("Division by zero is not possible!\n");
                break;
        }
    }

    return 0;
}
