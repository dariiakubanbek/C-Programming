#include <stdio.h>

int main() {
int x, y;
//Getting values
printf("Give two numbers in this format: 0,0\n");
scanf("%d, %d", &x, &y);


printf("Sum of two numbers: %d\n", x + y);
printf("Difference between two numbers: %d\n", x - y);
printf("Product of two numbers: %d\n", x * y);
printf("Quotient of two numbers: %d\n", x / y);
printf("Remainer of the two numbers: %d\n",x % y);

return 0;
}