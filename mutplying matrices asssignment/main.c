#include <stdio.h>

#define rows_first 2
#define cols_first 3
#define rows_second 3
#define cols_second 2

int main() {
    int i, j, k;
    int first[rows_first][cols_first], second[rows_second][cols_second], result[rows_first][cols_second];

    printf("Enter elements for First Matrix:\n");
    for (i = 0; i < rows_first; i++) {
        for (j = 0; j < cols_first; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements for Second Matrix:\n");
    for (i = 0; i < rows_second; i++) {
        for (j = 0; j < cols_second; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    printf("First Matrix:\n");
    for (i = 0; i < rows_first; i++) {
        for (j = 0; j < cols_first; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix:\n");
    for (i = 0; i < rows_second; i++) {
        for (j = 0; j < cols_second; j++) {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows_first; i++) {
        for (j = 0; j < cols_second; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols_first; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < rows_first; i++) {
        for (j = 0; j < cols_second; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
