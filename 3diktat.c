#include <stdio.h>
#include <stdlib.h>
// scope = Gültigkeitsbereich einer Variable
int strlen(char* wort) {
    int sz = 0;
    for (; wort[sz] != '\0'; sz++)
        ;

    return sz;
}

void dump(char* wort) {
    for (int i = 0; i < strlen(wort); i++) {
    printf("%c ", wort[i]);
    }
    printf("\n");
}

char* init(int sz, char c) {
    char* wort = malloc(sz + 1);
    for (int i = 0; i < sz; i++) {
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int check(char* wort1, char* wort2, char c) {
    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] == c) {
            wort2[i] = c;
        }
    }
    return 0;
}

int main()
{
    char* wort = "WORT";
    char* wort2 = init(strlen(wort), '?');

    dump(wort2);
    check(wort, wort2, 'X');
    dump(wort2);
    free(wort2);
    
    return 0;
}