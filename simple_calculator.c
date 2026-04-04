#include <stdio.h>

int main() {
    double num1, num2, answer;
    char op;
    printf("Enter 1st number:\n ");
    scanf("%lf", &num1);
    printf("Enter 2st number:\n ");
    scanf("%lf", &num2);
    printf("Enter operator:\n ");
    scanf(" %c", &op);
    switch (op) {
    case '+': answer = num1 + num2; break;
    case '*': answer = num1 * num2; break;
    case '/': answer = num1 / num2; break;
    case '-': answer = num1 - num2; break;
    default: printf("Invalid operator\n"); return 1;
    }
    printf("Your result is %f\n", answer);
    return 0;
}
