#include <stdio.h>
#define MAX 100

void bubble_sort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) { int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
}

int main(void){
    int arr[MAX], n;
    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
