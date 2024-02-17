#include <stdio.h>
#include <stdlib.h>

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
void compare(double a, double b);
void checkOddEven(double num);

int main() {
    double a = 0, b = 0;

    printf("Enter the first number\n ");
    scanf("%lf", &a);

    printf("Enter the second number\n ");
    scanf("%lf", &b);

    printf("The sum is %lf\n", addition(a, b));
    printf("The difference is %lf\n", subtraction(a, b));
    printf("The product is %lf\n", multiplication(a, b));
    printf("The division is %lf\n", division(a, b));

    printf("The sum is %lf and the difference is %lf\n", addition(a, b), subtraction(a, b));
    printf("The product is %lf and the division is %lf\n", multiplication(a, b), division(a, b));

    compare(a, b);
    checkOddEven(a);
    checkOddEven(b);

    return 0;
}

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

void compare(double a, double b) {
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is equal to b\n");
    }
}

void checkOddEven(double num) {
    if ((int)num % 2 == 0) {
        printf("%.lf is even\n", num);
    } else {
        printf("%.lf is odd\n", num);
    }
}
