#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int);

int main() {
    int num, i;

    printf("Enter the term n for the series\n");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");

    return 0;
}

int Fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
