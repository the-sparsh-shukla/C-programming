#include <stdio.h>
void increment(int *x){ (*x)++; }
int main(void){
    int n = 9;
    increment(&n);
    printf("%d\n", n);
    return 0;
}
