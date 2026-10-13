#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // Der Seed des Zufallsgenarator wird bei jedem start des Programmes verändert 

    int raten;
    int ZAHL = rand() % 10; // Eine zufällige Zahl wird generiert und durch % 10 ist es eine Zahl von 0 bis 9
    
    for (int i = 0; i < 10; i++ ) // Schleife für 10 Versuche
    {
        printf("Errate meine Zahl: ");
        scanf("%d", &raten);

        if (raten == -1)
        {
            printf("CHEATER !!!\nDie Zahl die du erraten willst ist %d\n", ZAHL);
        }
        if (raten > ZAHL)
        {
            printf("Zu gross\n");
        }
        else if (raten < ZAHL)
        {
            printf("Zu klein\n");
        }
        else if (raten == ZAHL)
        {
            printf("Du hast meine Zahl erraten\n");
            i = 10;
        }
        else 
        {
            printf("Dieser Fall kann nicht passieren %d, %d", raten, ZAHL);
        }
    }
    return 0;
}