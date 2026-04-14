#include <stdio.h>
int main(void){
    char name[32];
    int year;
    printf("Enter name and birth year: ");
    if (scanf("%31s %d", name, &year) != 2) return 1;
    printf("Hello %s, you are %d years old (approx).\n", name, 2026 - year);
    return 0;
}
