#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *kw[] = {"int", "char", "if", "else", "while", "return", "for", "float", "double", "void"};
char *op = "+-*/=%<>&|!";

int iskw(char *s) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(s, kw[i]) == 0) return 1;
    }
    return 0;
}

int isop(char c) {
    for (int i = 0; i < strlen(op); i++) {
        if (c == op[i]) return 1;
    }
    return 0;
}

int main() {
    FILE *f;
    char ch, s[50];
    int i = 0;

    f = fopen("code.txt", "r");
    if (!f) {
        printf("cant open file\n");
        return 1;
    }

    printf("tokens:\n");

    while ((ch = fgetc(f)) != EOF) {
        if (isalpha(ch)) {
            s[i++] = ch;
        } else {
            if (i > 0) {
                s[i] = '\0';
                if (iskw(s)) {
                    printf("kw: %s\n", s);
                } else {
                    printf("id: %s\n", s);
                }
                i = 0;
            }

            if (isop(ch)) {
                printf("op: %c\n", ch);
            }
        }
    }

    fclose(f);
    return 0;
}
