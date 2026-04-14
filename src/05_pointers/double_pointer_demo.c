#include <stdio.h>
int main(void){
    int a = 11;
    int *p = &a;
    int **pp = &p;
    printf("%d\n", **pp);
    return 0;
}
