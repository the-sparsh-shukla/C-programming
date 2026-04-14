#include <stdio.h>
int main(void){
    int a[] = {8, 3, 9, 2, 7};
    int n = (int)(sizeof(a)/sizeof(a[0]));
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("min=%d max=%d\n", min, max);
    return 0;
}
