#include <stdio.h>

int strcmp(const char secret[], char guessed[])
{
    if (secret == guessed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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

    // 5 Fails
    for (int fails = 0; fails < 5; fails += (hits == 0))
    {
        // Abfrage
        printf("Buchstabe: ");
        if (scanf(" %c", &guess) != 1)
        {
            printf("Ungültige Eingabe\n");
            return 1;
        }
        
        // Vergleich
        int hits = 0;
        for (int i = 0; i < len; i++)
        {
            if (secret[i] == guess)
            {
                hits++;
                guessed[i] = guess;
            }
        }

        //strcmd(secret, guessed)

        // Ausgabe
        for (int i = 0; i < len; i++)
        {
            printf("%c ", guessed[i]);
        }

        printf("\nTreffer: %d\n\n", hits);
    }
    return 0;
}