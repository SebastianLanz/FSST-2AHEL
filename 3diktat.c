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

char normalize(char c) {
    if (!is_upper(c) && !is_lower(c)) { // -> De Morgan
        return -1;
    }
    return c + ('a'- 'A');
}

int is_upper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int is_lower(char c) {
    return (c >= 'a' && c <= 'z');
}

int check(char* wort1, char* wort2, char c) {
    if (strlen(wort1) == 0 || strlen(wort1) != strlen(wort2)) {
        return -1;
    }

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