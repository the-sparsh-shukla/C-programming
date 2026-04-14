#include <stdio.h>
int main(void){
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
    return 0;
}
