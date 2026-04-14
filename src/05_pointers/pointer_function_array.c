#include <stdio.h>
void fill(int *arr, int n){ for (int i = 0; i < n; i++) arr[i] = i + 1; }
int main(void){
    int arr[5];
    fill(arr, 5);
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
