#include <stdio.h>
int main(void){
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (!in || !out) return 1;
    int c;
    while ((c = fgetc(in)) != EOF) fputc(c, out);
    fclose(in);
    fclose(out);
    return 0;
}
