#include <stdio.h>
#include <stdlib.h>

int main() {
    int marks[10] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int num;

    printf("original array:\n");
    for (num = 0; num < 10; num++) {
        printf("%d\t", marks[num]);
    }


    for (num = 9; num >= 2; num--) {
        marks[num] = marks[num - 1];
    }

    marks[2] = 3;

    printf("\n after inserting 3 to the second index:\n");
    for (num = 0; num < 10; num++) {
        printf("%d\t", marks[num]);
    }

    for (num = 2; num < 9; num++) {
        marks[num] = marks[num + 1];
    }

    printf("\n after eliminating 3 in the second index:\n");
    for (num = 0; num < 9; num++) {
        printf("%d\t", marks[num]);
    }

    return 0;
}
