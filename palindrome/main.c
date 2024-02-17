#include <stdio.h>

int isPalindrome(int n) {
    int reversed = 0, original = n;

    while (n > 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number\n ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
