#include <stdio.h>

int main()
{
    // Variablen
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess;
    int hits = 0;
    
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
    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            hits++;
            guessed[i] = guess;
        }
    }

    // Ausgabe
    for (int i = 0; i < len; i++)
    {
        printf("%c ", guessed[i]);
    }

    printf("\nTreffer: %d", hits);
    return 0;
}