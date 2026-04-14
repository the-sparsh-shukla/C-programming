#include <stdio.h>
int main(void){
    FILE *fp = fopen("numbers.txt", "w");
    if (!fp) return 1;
    for (int i = 1; i <= 5; i++) fprintf(fp, "%d\n", i * 10);
    fclose(fp);
    return 0;
}
