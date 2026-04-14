#include <stdio.h>
int main(void){
#ifdef _WIN32
    puts("Compiled on Windows");
#else
    puts("Compiled on non-Windows platform");
#endif
    return 0;
}
