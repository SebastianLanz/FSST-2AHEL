#include <stdio.h>

int main()
{
    const char secret[] = "MONSTER4EVER";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess;

    for (int i =  0; i < len; i ++)
    {
        guessed[i] = '_';
    }

    printf("Buchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe\n");
        return 1;
    }
    
    int hits = 0;
    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c ", guessed[i]);
    }

    printf("\nTreffer: %d", hits);
    return 0;
}