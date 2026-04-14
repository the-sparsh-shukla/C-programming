#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct { char name[32]; char phone[20]; } Contact;
int main(void){
    Contact list[MAX];
    int n = 0, choice;
    while (1) {
        printf("1.Add 2.Search 3.List 4.Exit\n");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1 && n < MAX) scanf("%31s %19s", list[n].name, list[n++].phone);
        else if (choice == 2) {
            char key[32]; scanf("%31s", key);
            for (int i = 0; i < n; i++) if (strcmp(list[i].name, key) == 0) printf("%s %s\n", list[i].name, list[i].phone);
        } else if (choice == 3) {
            for (int i = 0; i < n; i++) printf("%s %s\n", list[i].name, list[i].phone);
        } else if (choice == 4) break;
    }
    return 0;
}
