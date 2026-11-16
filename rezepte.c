#include <stdio.h>
#include <stdlib.h>

float umrechnen(float menge1, float palt1, float pneu1)
{
    float mengeneu = (pneu1/palt1)*menge1;
    return mengeneu;
}

int main(int argc, char* argv[])
{
    if (argc == 1) // Benutzer hat keine Parameter uebergeben
    {

    }
    else if(argc == 4)
    {
        char *menge = argv[1];
        char *palt = argv[2];
        char *pneu = argv[3];
        float menge1 = atof(menge);
        float palt1 = atof(palt);
        float pneu1 = atof(pneu);
        printf("Fuer %.2f Personen: %.2f -> fuer %.2f Personen: %.2f", palt1, menge1, pneu1, umrechnen(menge1, palt1, pneu1));
    }
    else
    {
        printf("Usage: rezepte <menge> <personenanzahl_alt> <personenanzahl_neu>");
        return -1;
    }
    return 0;
}