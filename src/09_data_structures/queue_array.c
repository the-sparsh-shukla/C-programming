#include <stdio.h>
#define MAX 10
int main(void){
    int q[MAX], front = 0, rear = -1;
    q[++rear] = 10; q[++rear] = 20;
    printf("dequeue=%d\n", q[front++]);
    return 0;
}
