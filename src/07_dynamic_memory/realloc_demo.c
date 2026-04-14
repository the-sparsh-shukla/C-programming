#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n = 3;
    int *a = (int *)malloc((size_t)n * sizeof(int));
    if (!a) return 1;
    for (int i = 0; i < n; i++) a[i] = i + 1;
    n = 6;
    int *tmp = (int *)realloc(a, (size_t)n * sizeof(int));
    if (!tmp) { free(a); return 1; }
    a = tmp;
    for (int i = 3; i < n; i++) a[i] = i + 1;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
