#include <stdio.h>
int main(void){
    FILE *fp = fopen("log.txt", "a");
    if (!fp) return 1;
    fputs("program started\n", fp);
    fclose(fp);
    return 0;
}
