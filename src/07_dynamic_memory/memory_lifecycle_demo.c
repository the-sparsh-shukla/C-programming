#include <stdio.h>
#include <stdlib.h>
char *make_message(void){
    char *m = (char *)malloc(20);
    if (!m) return NULL;
    m[0]='O'; m[1]='K'; m[2]='\0';
    return m;
}
int main(void){
    char *msg = make_message();
    if (!msg) return 1;
    puts(msg);
    free(msg);
    return 0;
}
