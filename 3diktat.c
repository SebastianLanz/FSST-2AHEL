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
}

char* init(int sz, char c) {
    char* wort = malloc(sz + 1);
    for (int i = 0; i < sz; i++) {
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int main()
{
    char* wort = "WORT";
    char* wort2 = init(strlen(wort), 'A');

    dump(wort2);

    return 0;
}