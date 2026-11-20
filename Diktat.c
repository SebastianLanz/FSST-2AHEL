#include <stdio.h>

int len(char* wort) {
    int n = 0;
    for (int i = 0; wort[i] != '\0'; i++) {
        n++;
    }
    return n;
}

int cmp(char* wort1, char* wort2) {
    if (len(wort1) != len(wort2)) {
        return -1;
    }
    for (int i = 0; wort1[i] != '\0'; i++) {
        if  (wort1[i] != wort2[i]) {
            return -1;
        }
    }
    return 0;
}

int main(int argc, char* argv[])
{
    if (argc != 3) {
        return -1;
    }
    char* wort1 = argv[1];
    char* wort2 = argv[2];
    int eq =cmp(wort1, wort2);

    if (eq == 0) {
        printf("Die Woerter sind gleich\n");
        return 0;
    }
    else {
        printf("Die Woerter sind ungleich\n");
        return -1;
    }

    return 0;
}