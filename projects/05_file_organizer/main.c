#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc < 3) {
        printf("Usage: main.exe <source_file> <destination_file>\n");
        return 1;
    }
    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");
    if (!src || !dst) return 1;
    char line[256];
    while (fgets(line, sizeof(line), src)) fputs(line, dst);
    fclose(src);
    fclose(dst);
    printf("Copied %s -> %s\n", argv[1], argv[2]);
    return 0;
}
