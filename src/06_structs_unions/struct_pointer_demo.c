#include <stdio.h>
struct Book { char title[32]; int year; };
int main(void){
    struct Book b = {"CPrimer", 2024};
    struct Book *pb = &b;
    printf("%s %d\n", pb->title, pb->year);
    return 0;
}
