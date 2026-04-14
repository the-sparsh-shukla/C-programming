#include <stdio.h>
int main(void){
    int arr[] = {2, 4, 6, 8, 10};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("sum=%d avg=%.2f\n", sum, (double)sum / n);
    return 0;
}
