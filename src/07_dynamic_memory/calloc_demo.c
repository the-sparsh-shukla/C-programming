#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    scanf("%d", &n);
    int *a = (int *)calloc((size_t)n, sizeof(int));
    if (!a) return 1;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
