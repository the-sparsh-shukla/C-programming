#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct {
    int roll;
    char name[32];
    float marks;
} Student;

int main(void){
    Student students[MAX];
    int count = 0, choice;
    while (1) {
        printf("1.Add 2.List 3.Exit\n");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1 && count < MAX) {
            scanf("%d %31s %f", &students[count].roll, students[count].name, &students[count].marks);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("%d %s %.2f\n", students[i].roll, students[i].name, students[i].marks);
            }
        } else if (choice == 3) {
            break;
        }
    }
    return 0;
}
