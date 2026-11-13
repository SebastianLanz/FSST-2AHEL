#include <stdio.h>

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
        printf("Fuer %d Personen: %d -> fuer %d Personen: %d", palt, menge, pneu, umrechnen(menge, palt, pneu));
    }
    else
    {
        printf("Usage: rezepte <menge> <personenanzahl_alt> <personenanzahl_neu>");
        return -1;
    }
    return 0;
}