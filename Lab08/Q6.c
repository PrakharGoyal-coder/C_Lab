/*
Menu-Driven Program using Enum: Define an enum Operation with values { ADD, SUBTRACT,
MULTIPLY, DIVIDE, EXIT }. Write a menu-driven program that:
• Prompts the user to choose an operation.
• Performs the corresponding arithmetic operation on two integers.
• Continues until the user selects EXIT.
*/
#include <stdio.h>

enum Operation{ADD=1,SUBTRACT,MULTIPLY,DIVIDE,EXIT };

int main()
{
    int choice;
    int a,b;
    enum Operation op;

    while(1)
    {
        printf("Menu\n");
        printf("1-Add\n");
        printf("2-Subtract\n");
        printf("3-Multiply\n");
        printf("4-Divide\n");
        printf("5-Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        op=(enum Operation)choice;

        if (op==EXIT)
        {
            printf("Exiting the program\n");
            break;
        }

        if (op<ADD||op>EXIT)
        {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter two integers: ");
        scanf("%d %d",&a,&b);

        switch(op)
        {
            case ADD:
                printf("Result: %d + %d = %d\n", a, b, a + b);
                break;

            case SUBTRACT:
                printf("Result: %d - %d = %d\n", a, b, a - b);
                break;

            case MULTIPLY:
                printf("Result: %d * %d = %d\n", a, b, a * b);
                break;

            case DIVIDE:
                if (b == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
                break;

            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
