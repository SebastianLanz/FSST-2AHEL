#include <stdio.h>

int leet(char* wort) {
    int n = 0;
    for (int i = 0; wort[i] != '\0'; i++) {
        if (wort[i] == 'e' || 'E') {
            wort[i] = '3';
            n++;
        }
    }
    return n;
}

int main(int argc, char* argv[])
{
    if (argc != 2) {
        return -1;
    }
    
    return 0;
}