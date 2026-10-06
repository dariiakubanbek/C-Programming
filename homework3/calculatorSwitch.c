#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two integers and an operator (+, -, *, /) : ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("Result : %d\n", a + b);
            break;
        case '-':
            printf("Result : %d\n", a - b);
            break;
        case '*':
            printf("Result : %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result : %d\n", a / b);
            else
                printf("Error: division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}