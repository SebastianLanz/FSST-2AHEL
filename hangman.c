#include <stdio.h>

int main()
{
    const char secret[] = "MONSTER4EVER";
    char guess;

    printf("Buchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe\n");
        return 1;
    }
    
    int hits = 0;
    for (int i = 0; i < sizeof(secret); i++)
    {
        if ((secret[i]) == guess)
        {
            hits++;
        }
    }

    printf("Treffer: %d", hits);

    return 0;
}