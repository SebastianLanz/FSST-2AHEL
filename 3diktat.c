#include <stdio.h>
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
    char wort[sz];
    for (int i = 0; i < sz; i++) {
        wort[i] = c;
    }
    return wort;
}

int main()
{
    char* wort = "WORT";
    char* wort2 = init(strlen(wort), '_');

    dump(wort);

    return 0;
}