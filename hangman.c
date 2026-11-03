#include <stdio.h>

int countHits(const char secret[], const char guess, char guessed[], const int len)
{
    int hits = 0;
    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            hits++;
            guessed[i] = guess;
        }
    }

    return hits;
}

int main()
{
    // Variablen
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    const char guess;
    
    // Variable initialisieren
    for (int i =  0; i < len; i ++)
    {
        guessed[i] = '_';
    }

    // Abfrage
    printf("Buchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe\n");
        return 1;
    }
    
    // Vergleich
    countHits(secret, guess, guessed, len);

    // Ausgabe
    for (int i = 0; i < len; i++)
    {
        printf("%c ", guessed[i]);
    }

    printf("\nTreffer: %d", hits);
    return 0;
}