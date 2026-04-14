#include <stdio.h>
char b[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void draw(void){
    printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n", b[0][0],b[0][1],b[0][2],b[1][0],b[1][1],b[1][2],b[2][0],b[2][1],b[2][2]);
}
int main(void){
    int move; char p = 'X';
    for (int i = 0; i < 9; i++) {
        draw();
        printf("Player %c move (1-9): ", p);
        if (scanf("%d", &move) != 1 || move < 1 || move > 9) break;
        int r = (move - 1) / 3, c = (move - 1) % 3;
        if (b[r][c] == 'X' || b[r][c] == 'O') { i--; continue; }
        b[r][c] = p;
        p = (p == 'X') ? 'O' : 'X';
    }
    draw();
    return 0;
}
