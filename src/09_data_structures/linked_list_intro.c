#include <stdio.h>
struct Node { int data; struct Node *next; };
int main(void){
    struct Node n3 = {30, NULL};
    struct Node n2 = {20, &n3};
    struct Node n1 = {10, &n2};
    for (struct Node *p = &n1; p != NULL; p = p->next) printf("%d ", p->data);
    printf("\n");
    return 0;
}
