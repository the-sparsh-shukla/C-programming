#include <stdio.h>
#define MAX 100
int main(void){
    int stack[MAX], top = -1;
    stack[++top] = 10;
    stack[++top] = 20;
    printf("pop=%d\n", stack[top--]);
    return 0;
}
