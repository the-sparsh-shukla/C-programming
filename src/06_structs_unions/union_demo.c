#include <stdio.h>
union Number { int i; float f; };
int main(void){
    union Number n;
    n.i = 42;
    printf("i=%d\n", n.i);
    n.f = 3.5f;
    printf("f=%.2f\n", n.f);
    return 0;
}
