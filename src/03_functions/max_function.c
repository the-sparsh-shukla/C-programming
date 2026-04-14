#include <stdio.h>
int max2(int a, int b){ return (a > b) ? a : b; }
int main(void){
    printf("%d\n", max2(10, 22));
    return 0;
}
