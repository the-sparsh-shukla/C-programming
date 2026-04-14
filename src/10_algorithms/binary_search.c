#include <stdio.h>
int binary_search(int a[], int n, int key){
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == key) return m;
        if (a[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main(void){
    int a[] = {1, 3, 5, 7, 9, 11};
    int idx = binary_search(a, 6, 7);
    printf("index=%d\n", idx);
    return 0;
}
