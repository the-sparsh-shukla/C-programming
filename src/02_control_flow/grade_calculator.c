#include <stdio.h>
int main(void){
    int marks;
    scanf("%d", &marks);
    if (marks >= 90) printf("A\n");
    else if (marks >= 75) printf("B\n");
    else if (marks >= 60) printf("C\n");
    else printf("D\n");
    return 0;
}
