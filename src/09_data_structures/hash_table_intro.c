#include <stdio.h>
#define N 7
int main(void){
    int table[N] = {0};
    int keys[] = {10, 17, 24};
    for (int i = 0; i < 3; i++) table[keys[i] % N] = keys[i];
    for (int i = 0; i < N; i++) printf("%d ", table[i]);
    printf("\n");
    return 0;
}
