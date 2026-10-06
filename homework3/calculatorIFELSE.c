#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two integers and an operator (+, -, *, /) : ");
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+') {
        printf("Result : %d\n", a + b);
    } else if (op == '-') {
        printf("Result : %d\n", a - b);
    } else if (op == '*') {
        printf("Result : %d\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Result : %d\n", a / b);
        } else {
            printf("Error: division by zero\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}