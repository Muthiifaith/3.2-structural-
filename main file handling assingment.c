#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("data.txt", "a+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Existing content in the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fseek(file, 0, SEEK_END);

    printf("\nEnter data to append to the file (type 'exit' to stop):\n");
    while (1) {
        fgets(data, sizeof(data), stdin);

        if (strncmp(data, "exit", 4) == 0) {
            break;
        }

        fputs(data, file);
    }

    fclose(file);

    printf("\nData appended successfully.\n");

    return 0;
}
