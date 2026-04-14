#include <stdio.h>
typedef struct {
    int id;
    char name[32];
    float cgpa;
} Student;
int main(void){
    Student s = {1, "Aarav", 8.7f};
    printf("%d %s %.2f\n", s.id, s.name, s.cgpa);
    return 0;
}
