#include <stdio.h>

int power(int basis, int exponent) {
    int erg = basis;
    while ((exponent - 1) > 0) {
        erg = erg*basis;
        exponent--;
    }
    return erg;
}

int main()
{
    int basis = 2;
    int exponent = 6;
    printf("%d", power(basis, exponent));
    return 0;
}