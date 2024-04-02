#include <stdio.h>
#include <math.h>

int check_armstrong(int num) {
    int original, remainder, digitCount = 0;
    double result = 0.0;

    original = num;

    while(original != 0) {
        original /= 10;
        digitCount++;
    }
    original = num;

    while(original != 0){
        remainder = original % 10;
        result += pow(remainder, digitCount);
        original /= 10;
    }

    return (int)result == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(check_armstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    }
    else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
