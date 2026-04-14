#include <stdio.h>
#include <string.h>
int main(void){
    char s[64];
    scanf("%63s", s);
    for (int i = 0, j = (int)strlen(s) - 1; i < j; i++, j--) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
    }
    printf("%s\n", s);
    return 0;
}
