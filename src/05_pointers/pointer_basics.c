#include <stdio.h>
int main(void){
    int a = 42;
    int *p = &a;
    printf("a=%d *p=%d\n", a, *p);
    *p = 99;
    printf("a=%d\n", a);
    return 0;
}
