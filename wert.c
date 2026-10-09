#include <stdio.h>

int main(void)
{
    int raten;
    int ZAHL = 33;
    printf("Errate meine Zahl: ");
    scanf("%d", &raten);
    if (raten == ZAHL)
    {
        printf("Du hast meine Zahl erraten");
    }
    if (raten < ZAHL)
    {
        printf("Zu klein");
    }
    if (raten > ZAHL)
    {
        printf("Zu gross");
    }

    return 0;
}