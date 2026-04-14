#include <stdio.h>
#include <string.h>
int main(void){
    char s[64] = "c programming";
    printf("len=%zu\n", strlen(s));
    s[0] = 'C';
    printf("%s\n", s);
    return 0;
}
