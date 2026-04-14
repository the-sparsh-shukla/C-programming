#include <stdio.h>
#include <stdlib.h>
int main(void){
    const char *u = getenv("USERNAME");
    printf("USER=%s\n", u ? u : "unknown");
    return 0;
}
