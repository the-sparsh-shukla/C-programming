#include <stdio.h>
int square(int x){ return x * x; }
int cube(int x){ return x * x * x; }
int main(void){
    int n = 5;
    printf("square=%d cube=%d\n", square(n), cube(n));
    return 0;
}
