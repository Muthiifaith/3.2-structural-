#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct students{
        char name[50];
        int age;
        float maths;
        float english;
        float kiswahili;
    };

    int i;
    struct students results[3];

    for(i = 0; i < 3; i++){
        printf("Enter the name of student %d:\t", i + 1);
        fgets(results[i].name, sizeof(results[i].name), stdin);
        results[i].name[strcspn(results[i].name, "\n")] = 0;
        printf("Enter the age of student %d:\t", i + 1);
        scanf("%d", &results[i].age);
        printf("Enter the maths score of student %d:\t", i + 1);
        scanf("%f", &results[i].maths);
        printf("Enter the english score of student %d:\t", i + 1);
        scanf("%f", &results[i].english);
        printf("Enter the kiswahili score of student %d:\t", i + 1);
        scanf("%f", &results[i].kiswahili);
        getchar();
    }


    printf("\nEditing the maths score of student 2:\n");
    printf("Enter the new maths score for student 2:\t");
    scanf("%f", &results[1].maths);
    getchar();

    printf("\nUpdated Results:\n");
    for(i = 0; i < 3; i++){
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", results[i].name);
        printf("Age: %d\n", results[i].age);
        printf("Maths Score: %.2f\n", results[i].maths);
        printf("English Score: %.2f\n", results[i].english);
        printf("Kiswahili Score: %.2f\n", results[i].kiswahili);
        printf("\n");
    }

    return 0;
}
