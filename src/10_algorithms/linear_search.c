#include <stdio.h>
int linear_search(int a[], int n, int key){
    for (int i = 0; i < n; i++) if (a[i] == key) return i;
    return -1;
}
int main(void){
    int a[] = {4, 8, 15, 16, 23};
    printf("%d\n", linear_search(a, 5, 15));
    return 0;
}
