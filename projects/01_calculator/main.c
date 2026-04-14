#include <stdio.h>
int main(void){
    double a, b; char op;
    printf("Enter: number op number\n");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;
    if (op == '+') printf("%.2f\n", a + b);
    else if (op == '-') printf("%.2f\n", a - b);
    else if (op == '*') printf("%.2f\n", a * b);
    else if (op == '/') printf("%.2f\n", b != 0 ? a / b : 0.0);
    else printf("Invalid operator\n");
    return 0;
}
