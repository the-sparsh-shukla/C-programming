#include <stdio.h>
int main(void){
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) return 1;
    int x;
    while (fscanf(fp, "%d", &x) == 1) printf("%d ", x);
    printf("\n");
    fclose(fp);
    return 0;
}
